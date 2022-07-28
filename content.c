#include<stdio.h>
int digits(num)
{
    int count=0;
    do
    {
        num=num/10;
        count++;
    } while(num!=0);
    return count-1;
}
int main()
{
    int n,i;
    
    int b=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=digits(n);i>=0;i--)
    {
        int a=(n>>(8*i)) & 0xff;
        printf("The content of B%d is %d\n",digits(n)-(i-1),a);
    }
    return 0;
}