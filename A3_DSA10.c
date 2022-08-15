#include<stdio.h>

void printing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
void NGE(int arr[],int n)
{
    int maximum=arr[n-1];
    arr[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        int temp=arr[i];
        arr[i]=maximum;
        if(maximum<temp)
        {
            maximum=temp;
        }
    }
    printf("After replacing the modified array is: \n");
    printing(arr,n);
}



int main(){
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements into the array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    NGE(arr,n);
    return 0;
}