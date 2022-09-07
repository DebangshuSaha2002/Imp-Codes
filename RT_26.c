/*WAP to search an element in a array using Linear Search.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int search;
    int find=-1;
    printf("Enter the element you want to search: ");
    scanf("%d",&search);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==search)
        {
            find=j;
            break;
        }
    }
    if(find>=0)
    {
        printf("Element is found in the array at index %d\n",find);
    }
    else
    {
        printf("Element is not present in the array\n");
    }
    return 0;
}