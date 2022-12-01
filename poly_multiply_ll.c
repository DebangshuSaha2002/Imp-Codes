#include<stdio.h>
#include<stdlib.h>

struct node
{
    int co;
    int ex;
    struct node * next;
};

void display(struct node *head3)
{
    struct node *ptr=head3;
    while(ptr->next!=NULL)
    {
        printf("%dx^%d + ",ptr->co,ptr->ex);
        ptr=ptr->next;
    }
    printf("%dx^%d",ptr->co,ptr->ex);
    ptr=ptr->next;
}

struct node *create(struct node *head)
{
    int op;
    head=NULL;
    struct node *new,*ptr;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Coefficient: ");
    scanf("%d",&new->co);
    printf("Exponent: ");
    scanf("%d",&new->ex);
    new->next=NULL;
    head=new;
    ptr=head;
    printf("1->continue || 0->end :");
    scanf("%d",&op);
    while(op==1 && op!=0)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Coefficient: ");
        scanf("%d",&new->co);
        printf("Exponent: ");
        scanf("%d",&new->ex);
        new->next=NULL;
        ptr->next=new;
        ptr=ptr->next;
        printf("1->continue || 0->end :");
        scanf("%d",&op);
    }
    display(head);
    return head;
}

struct node * insert(struct node *head3, int c,int e)
{
    struct node * new,*ptr;
    new=(struct node *)malloc(sizeof(struct node));
    new->ex=e;
    new->co=c;
    new->next=NULL;
    if(head3==NULL)
    {
        head3=new;
    }
    else
    {
        ptr=head3;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new;
    }
    return head3;
}

void removedup(struct node * head)
{
    struct node * ptr1,*ptr2,*dup;
    ptr1=head;
    while(ptr1!=NULL && ptr1->next!=NULL)
    {
        ptr2=ptr1;
        while(ptr2->next!=NULL)
        {
            if(ptr1->co==ptr2->next->co)
            {
                ptr1->co=ptr1->co+ptr2->next->co;
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

struct node *polymultiply(struct node *head1,struct node *head2)
{
    struct node *head3=NULL;
    struct node *ptr1=head1;
    struct node *ptr2=head2;
    while(ptr1!=NULL)
    {
        while(ptr2!=NULL)
        {
            int co,ex;
            co=ptr1->co*ptr2->co;
            ex=ptr1->ex+ptr2->ex;
            head3=insert(head3,co,ex);
            ptr2=ptr2->next;
        }
        ptr2=head2;
        ptr1=ptr1->next;
    }
    removedup(head3);
    display(head3);
    return head3;
}

int main()
{
    struct node *head1,*head2,*head3;
    printf("\n1st Polynomial:\n");
    head1=create(head1);
    printf("\n2nd Polynomial:\n");
    head2=create(head2);
    printf("\nThe ADDED Polynomial is:\n\n");
    head3=polymultiply(head1,head2);
    return 0;
}