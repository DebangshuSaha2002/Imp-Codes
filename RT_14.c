/*WAP to find the sum of digits of the entered number.*/

#include<stdio.h>
int main()
{
    int rem,temp;
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of the digits in %d is %d",temp,sum);
    return 0;
}