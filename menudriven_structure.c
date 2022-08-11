#include<stdio.h>
int main()
{
    int add(int,int);
    int multiply(int,int);
    int A,B,C;
    printf("Enter an integer \n");
    scanf("%d",&A);
    printf("Enter an integer \n");
    scanf("%d",&B);
    int ch;
    printf("Enter your choice:\n1.Add.\n2.Multiply\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        C=add(A,B);
        break;
        case 2:
        C=multiply(A,B);
        break;
        default:
        printf("Invalid choice \n");
    }
    printf("The required output is:%d ",C);
}
int add(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}
int multiply(int x,int y)
{
    int z=0;
    z=x*y;
    return z;
}
