/*WAP to find out the second smallest and second largest element stored in an array.*/
#include <stdio.h>
#include <limits.h>

int main() 
{
    int arr[100], n, i;
    printf("Enter the size of an array: \n");
    scanf("%d", &n);
    
    printf("Enter %d elements to the array\n",n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0];
    int secondSmallest=arr[0];
    int largest=arr[0];
    int secondlargest=arr[0];
    for(i = 0; i < n; i++) 
    {
        if(arr[i] < smallest) 
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        if(arr[i] > largest) 
        {
            secondlargest = largest;
            largest = arr[i];
        }
        if(arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
        if(arr[i] > largest && arr[i] < secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    printf("Second smallest element is: %d\n", secondSmallest);
    printf("Second largest element is: %d\n", secondlargest);
    return 0;
}