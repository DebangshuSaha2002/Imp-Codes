//WAP to reverse the contents of an array of n elements.
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
    int lb=0;
    int ub=n-1;
    int temp;
    while(lb<ub)
    {
        temp=arr[lb];
        arr[lb]=arr[ub];
        arr[ub]=temp;
        lb=lb+1;
        ub=ub-1;
    }
    printf("The reversed array is:\n");
    for(j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}