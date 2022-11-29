#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void display(struct node * head)
{
    printf("\n");
    struct node * ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node * create(struct node * head,struct node * new,struct node * ptr)
{
    char ch;
    printf("Do you want to continue(y/n)? ");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        new=(struct node *) malloc(sizeof(struct node));
        printf("\nEnter the data: ");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=ptr->next;
        printf("Do you want to continue(y/n)? ");
        scanf(" %c",&ch);
    }
    display(head);
    return head;
}

void rev_linkedlist(struct node * head)
{
    struct node * ptr;
    struct node * ptr1;
    ptr=head->next;
    ptr1=ptr->next;
    head->next=NULL;
    while(ptr1!=NULL)
    {
        ptr->next=head;
        head=ptr;
        ptr=ptr1;
        ptr1=ptr1->next;
    }
    display(head);
}

struct node * remove_dup(struct node * head)
{
    struct node * ptr1,*ptr2,*dup;
    ptr1=head;
    while(ptr1!=NULL && ptr1->next!=NULL)
    {
        ptr2=ptr1;
        while(ptr2->next!=NULL)
        {
            if(ptr1->data==ptr2->next->data)
            {
                dup=ptr2->next;
                ptr2->next=ptr2->next->next;
                free(dup);
            }
            else
            {
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
    }
    return head;
}
int main()
{
    struct node * head,*ptr,*new;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;
    ptr=head;
    head=create(head,new,ptr);
    printf("\nReversed Linked list is:\n");
    // rev_linkedlist(head);
    head=remove_dup(head);
    display(head);
    return 0;
}