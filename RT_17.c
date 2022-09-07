//Armstrong or not
#include<stdio.h>
int main()
{
    int n,r=0,sum=0,temp=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("%d is an armstrong number",temp);
    }
    else
    {
        printf("%d is not an armstrong number",temp);
    }
    return 0;
}