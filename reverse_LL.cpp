//Reverse a linked list
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    public:
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void addintoll(node * &head)
{
    int n;
    cout<<"Enter 1 to continue and 0 to end:";
    cin>>n;
    while(n==1){
        int data;
        cout<<"Enter the data:";
        cin>>data;
        node * node1=new node(data);
        if(head==NULL){
            head=node1;
        }
        else{
            node * temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=node1;
            node1->next=NULL;
        }
        cout<<"Enter 1 to continue and 0 to end:";
        cin>>n;
    }
}

void printdata(node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

// node * reverseLL(node * &head){
//     node * curr=head;
//     node * prev=NULL;
//     node * forward=NULL;
//     while(curr!=NULL){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }

node * reverse_k(node * &head,int k)
{
    int count=0;
    node * curr=head;
    node * prev=NULL;
    node * forward=NULL;
    while(curr!=NULL && count<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    if(forward!=NULL)
    {
        head->next=reverse_k(forward,k);
    }

    return prev;
}

int main()
{
    node * head=NULL;
    addintoll(head);
    printdata(head);
    // node * rev=reverseLL(head);
    // printdata(rev);
    int k=2;
    node * rev_k=reverse_k(head,k);
    printdata(rev_k);
}