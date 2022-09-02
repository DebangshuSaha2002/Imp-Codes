#include<stdio.h>

int bin_to_deci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
        return((n%10)+(2*bin_to_deci(n/10)));
}
int main()
{
    int n;
    printf("Enter the binary number: ");
    scanf("%d",&n);
    printf("The decimal form of the number is %d",bin_to_deci(n));
    return 0;
}