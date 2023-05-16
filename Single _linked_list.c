#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head=NULL;

void display()
{
    struct node * ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

void add_to_ll(struct node * ptr,struct node * new)
{
    char ch;
    printf("Do you want to continue (y/n): ");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=new;
        printf("Do you want to continue (y/n): ");
        scanf(" %c",&ch);
    }
    display();
}

void insert_first()
{
    printf("\nInserting at first\n");
    struct node * new=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data:");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    display();
}

void insert_end()
{
    printf("\nInserting at end\n");
    struct node * new=(struct node *)malloc(sizeof(struct node));
    struct node * ptr=head; 
    printf("\nEnter the data:");
    scanf("%d",&new->data);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=NULL;
    display();
}

void insert_pos()
{
    struct node * new=(struct node *)malloc(sizeof(struct node));
    struct node * ptr=head;
    int pos;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    printf("\nInserting at pos:%d\n",pos);
    printf("Enter the data: ");
    scanf("%d",&new->data);
    int count=1;
    while(ptr!=NULL && count!=pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    new->next=ptr->next;
    ptr->next=new;
    display();
}

void del_first()
{
    printf("\nDeleting from first:\n");
    struct node * ptr=head;
    if(head==NULL)
    {
        printf("Underflow");
        return;
    }
    else{
        head=head->next;
    }
    free(ptr);
    printf("\n");
    display();
}

void del_last()
{
    printf("\nDeleting from end:\n");
    struct node * ptr=head;
    struct node * temp=NULL;
    while((ptr->next)->next!=NULL)
    {
        ptr=ptr->next;
    }
    temp=ptr->next;
    ptr->next=NULL;
    free(temp);
    printf("\n");
    display();
}

void del_at_a_pos()
{
    int pos;
    int count=1;
    struct node * temp=NULL;
    struct node * ptr=head;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    printf("\nDeleting at pos:%d\n",pos);
    while(ptr!=NULL && count!=pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    temp=ptr->next;
    ptr->next=temp->next;
    free(temp);
    printf("\n");
    display();
}

int main()
{
    struct node * new,* ptr;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;
    ptr=head;
    add_to_ll(ptr,new);

    insert_first();
    insert_first();

    insert_end();

    insert_pos();

    del_first();
    del_last();
    del_at_a_pos();
    return 0;
}