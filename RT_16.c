#include<stdio.h>
int sum=0,rem;
int reverse(int n)
{
    if(n)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        reverse(n/10);
    }
    else{
        return sum;
    }
    return sum;
}

int main()
{
    int n,ans;
    printf("Enter a number: ");
    scanf("%d",&n);
    ans=reverse(n);
    printf("The reverse of %d is %d",n,ans);
    return 0;
}