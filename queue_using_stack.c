//Queue using stack
#include<stdio.h>
#include<stdlib.h>

int stack1[10];
int stack2[10];
int top1=-1;
int top2=-1;
int size=10;
int c=0;

void push1(int x)
{
    if(top1==size)
    {
        printf("\nOverflow\n");
        return;
    }
    else
    {
        top1=top1+1;
        stack1[top1]=x;
    }
}

int pop1()
{
    int data;
    if(top1==-1)
    {
        printf("\nUnderflow\n");
        return 0;
    }
    else
    {
        data=stack1[top1];
        top1=top1-1;
    }
    return data;
}

void push2(int x)
{
    if(top2==size)
    {
        printf("\nOverflow\n");
        return;
    }
    else
    {
        top2=top2+1;
        stack2[top2]=x;
    }
}

int pop2()
{
    int data;
    if(top2==-1)
    {
        printf("\nUnderflow\n");
        return 0;
    }
    else
    {
        data=stack2[top2];
        top2=top2-1;
    }
    return data;
}

void enqueue()
{
    int n;
    printf("\nEnter the data: ");
    scanf("%d",&n);
    push1(n);
    c++;
}

void dequeue()
{
    int data;
    for(int i=0;i<=c;i++)
    {
        push2(pop1());
    }
    data=pop2();
    c--;
    for(int i=0;i<=c;i++)
    {
        push1(pop2());
    }
    printf("\nThe dequeued element is %d",data);
}

void display()
{
    for(int i=0;i<=top1;i++)
    {
        printf("%d ",stack1[i]);
    }
}

int main()
{
    int ch;
    int ch1;
    printf("\nEnter 1 to Enqueue and 0 to exit:");
    scanf("%d",&ch);
    while(ch==1)
    {
        enqueue();
        printf("\nEnter 1 to Enqueue and 0 to exit:");
        scanf("%d",&ch);
    }
    display();
    printf("\n");
    printf("\nEnter 1 to Dequeue and 0 to exit:");
    scanf("%d",&ch1);
    while(ch1==1)
    {
        dequeue();
        printf("\nEnter 1 to Dequeue and 0 to exit:");
        scanf("%d",&ch1);
    }
    display();

    return 0;
}