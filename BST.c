#include<stdio.h>
#include<stdlib.h>

struct tree 
{
    int data;
    struct tree * lc,*rc;
};

struct tree * create(struct tree * root)
{
    int n;
    struct tree * new;
    struct tree * ptr;
    new=(struct tree * )malloc(sizeof(struct tree));
    printf("\nEnter the data: ");
    scanf("%d",&n);
    new->data=n;
    new->lc=NULL;
    new->rc=NULL;
    
    // char ch;
    // printf("Do you want to continue(y/n): ");
    // scanf(" %c",&ch);
    // while(ch=='y')
    // {
        if(root==NULL)
        {
            root=new;
        }
        else
        {
            ptr=root;
            struct tree * temp=NULL;
            while(ptr!=NULL)
            {
                temp=ptr;
                if(n>ptr->data)
                {
                    ptr=ptr->rc;
                }
                else if(n<ptr->data)
                {
                    ptr=ptr->lc;
                }
            }
            if(n>temp->data)
            {
                temp->rc=new;
            }
            else
            {
                temp->lc=new;
            }
        }
    
    return root;
}

void inorder(struct tree * root)
{
    struct tree * ptr=root;
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        inorder(ptr->lc);
        printf("%d ",ptr->data);
        inorder(ptr->rc);
    }
}

int main()
{
    struct tree * root;
    char ch;
    printf("Do you want to add data: ");
    scanf(" %c",&ch);
    while(ch=='y')
    {
        root=create(root);
        printf("Do you want to add data: ");
        scanf(" %c",&ch);
    }
    
    // root=create(root);
    inorder(root);
    return 0;
}