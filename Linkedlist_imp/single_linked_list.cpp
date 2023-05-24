//Creating a single linked list
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void create_LL(node * &head){
    int ch;
    int val;
    cout<<"Enter 1 to continue and 0 to end: ";
    cin>>ch;
    while(ch==1){
        cout<<"Enter the new data:";
        cin>>val;
        node * node1=new node(val);
        if(head==NULL){
            head=node1;
        }
        else{
            node * temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=node1; 
        }
        cout<<"Enter 1 to continue and 0 to end: ";
        cin>>ch;
    }
}

void insertathead(node * & head){
    //inserting node at the start i.e. head
    int ch;
    int val;
    cout<<"\nEnter 1 to continue and 0 to end: ";
    cin>>ch;
    while(ch==1 && ch!=0){
        cout<<"Enter the new data:";
        cin>>val;
        node * node1=new node(val);
        if(head==NULL){
            head=node1;
        }
        else{
            node1->next=head;
            head=node1;
        }
        cout<<"Enter 1 to continue and 0 to end: ";
        cin>>ch;
    }
    cout<<"Exited"<<endl;
}

int length(node * head){
    int count=0;
    if(head==NULL){
        return 0;
    }
    else{
        while(head!=NULL){
            count++;
            head=head->next;
        }
    }
    return count;
}

void insertatpos(node * &head){
    //considering that index is starting from 0
    int index,val,ch;
    cout<<"\nEnter 1 to continue and 0 to end: ";
    cin>>ch;
    cout<<"Enter the index where u want to insert:";
    cin>>index;
    cout<<"Enter the new data:";
    cin>>val;
    int count=0;
    node * node1=new node(val);
    node * temp=head;
    while(ch==1 && ch!=0){
        if(index>length(head)){
            cout<<"Insertion not possible";
            exit(0);
        }
        else{
            while(count!=index-1 && temp!=NULL){
                temp=temp->next;
                count++;
            }
            node1->next=temp->next;
            temp->next=node1;
        }
        cout<<"Enter 1 to continue and 0 to end: ";
        cin>>ch;
    }
}

node * reverse(node * head){
    node * curr=head;
    node * prev=NULL;
    node * forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

node * middle_element(node * head){
    node * slow=head;
    node * fast=head->next;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast->next->next!=NULL){
            fast=fast->next;
        }
    }
    return slow;
}

void printLL(node * head){
    cout<<endl;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}

int main(){
    node * head=NULL;
    create_LL(head);
    printLL(head);
    // insertathead(head);
    // printLL(head);
    // insertatpos(head);
    // printLL(head);
    // node * rev=reverse(head);    //reversing a linked list
    
    // printLL(rev);
    
    node * mid=middle_element(head);//Finding the middle element in the list
    cout<<mid->data<<endl;
    return 0;
}