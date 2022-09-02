/*WAP to check whether the entered number is prime or not.*/

#include<stdio.h>

void check_prime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is not a Prime number",n);
    }    
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    check_prime(n);
    return 0;
}