//C Program Inputs two arrays and saves sum in a third array Program in C
#include<stdio.h>

void traversal(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}

void printing(int n,int arr[])
{
    printf("The element are: \n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d : %d\n",i,arr[i]);
    }
}

void adding(int n1,int n2,int arr1[],int arr2[])
{
    int n;
    int sum[100];
    if(n1>n2)
    {
        n=n1;
    }
    else{
        n=n2;
    }
    for(int i=0;i<n;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }

    printing(n,sum);
}

int main()
{
    int n1,n2;
    printf("Enter the number of elements for array 1: ");
    scanf("%d",&n1);

    printf("Enter the number of elements for array 2: ");
    scanf("%d",&n2);

    int arr1[n1];
    int arr2[n2];

    traversal(n1,arr1);
    printf("\n");
    traversal(n2,arr2);
    printf("\n");
    printing(n1,arr1);
    printf("\n");
    printing(n2,arr2);
    adding(n1,n2,arr1,arr2);
    return 0;
}