//WAP to find out the smallest and largest element stored in an array of n integers.
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
    int smallest;
    int largest;
    smallest=largest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
        else if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("The smallest element in the array is : %d\n",smallest);
    printf("The largest element in the array is : %d\n",largest);
    return 0;
}
