/*WAP to print sum of even and odd numbers from 1 to N numbers*/
#include<stdio.h>
int main()
{
    int n,sumeven=0,sumodd=0;
    printf("Enter the value of n (Max range): ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        sumodd+=i;
    }
    for( int j=2;j<=n;j=j+2)
    {
        sumeven+=j;
    }
    printf("The sum of even numbers is: %d",sumeven);
    printf("The sum of odd numbers is: %d",sumodd);
    return 0;
}