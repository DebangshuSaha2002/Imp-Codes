//WAP to sort an array of n numbers.
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
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //Printing the sorted array
    printf("The array after sorting is:\n");
    printf("\nThe elements in the array are:\n");
    for(j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
}