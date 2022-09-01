/*WAP to print the sum of all numbers up to a given number.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=(n*(n+1))/2;
    printf("The sum of all numbers upto %d is: %d",n,sum);
    return 0;
}