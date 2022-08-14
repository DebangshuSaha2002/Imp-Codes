#include<stdio.h>
int main()
{
    int LA[10],LB[10],LSum[10],i,m,n,cnt=0;
    for(i=0;i<=9;i++)
    {
        LA[i]=0;
        LB[i]=0;
    }
    printf("\nEnter the order of first Polynomial : ");
    scanf("%d",&m);
    printf("\nEnter the Co-efficients:\n");
    for(i=m;i>=0;i--)
    {   
        scanf("%d",&LA[i]);
    }
    printf("\nEnter the order of Second Polynomail : ");
    scanf("%d",&n);
    printf("\nEnter the Co-efficients:\n");
    for(i=n;i>=0;i--)
    {
        scanf("%d",&LB[i]);
    }
    if(m>=n)
    {
        for(i=m;i>=0;i--)
        {
            LSum[i]=LA[i]+LB[i];
            cnt++;
        }
    }
    else
    {
        for(i=n;i>=0;i--)
        {   
            LSum[i]=LA[i]+LB[i];
        }
    }
    printf("\nThe resultant polynomial after addition is: ");
    for(i=cnt-1;i>0;i--)
    {
        printf("%dX^%d + ",LSum[i],i);
    }
    printf("%d",LSum[i]);
    return 0;
}