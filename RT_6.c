/*WAP to find the factorial of a given number.*/
#include<stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n,f;
    printf("Enter the number whose factorial you want: ");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial of %d is %d",n,f);
    return 0;
}