#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements in the array are:\n");
    for(j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    int search;
    int index=-1;
    printf("Enter the element u want to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    {
        printf("The element is present in the array at index:%d\n",index);
    }
    else
    {
        printf("The element is not present in the array\n");
    }
    return 0;
}