//Stack using queue
#include<stdio.h>

int queue[10];
int front=-1;
int rear=-1;
int size=9;

void enqueue(int x)
{
    if(rear==size)
    {
        printf("\nOverflow\n");
        return;
    }
    else
    {
        rear=(rear+1)%size;
    }
    queue[rear]=x;
}

int dequeue()
{
    int data;
    if(front==-1 && rear==-1)
    {
        printf("\nUNDERFLOW\n");
        return 0;
    }
    else if(front==rear)
    {
        data=queue[front];
        front--;
        rear--;
    }
    else
    {
        data=queue[front];
        front=(front+1)%size;
    }
    return data;
}

void push()
{
    int n;
    printf("\nEnter the value to Push: ");
    scanf("%d",&n);
    enqueue(n);
    int l=1;
    for(int i=front;i!=rear;i=(i+1)%size)
    {
        l++;
    }
    while(l>1)
    {
        int x=dequeue();
        enqueue(x);
        l--;
    }
}

void pop()
{
    int data;
    data=dequeue();
    printf("The Popped element is: %d",data);
}

int main()
{
    int ch;
    printf("\nEnter 1 to PUSH and 0 to exit:");
    scanf("%d",&ch);
    while(ch==1)
    {
        push();
        printf("Enter 1 to continue and 0 to exit:");
        scanf("%d",&ch);  
    }
    int ch1;
    printf("\nEnter 1 to dequeue and 0 to exit: ");
    scanf("%d",&ch1);
    while(ch1==1)
    {
        pop();
        printf("\nEnter 1 to POP and 0 to exit: ");
        scanf("%d",&ch1);
    }
    return 0;
}