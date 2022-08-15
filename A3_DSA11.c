/*WAP to replace every dynamic array element by multiplication 
of previous and next of an n element.*/
#include<stdio.h>

void printing(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
void Multiply_prev_next(int arr[],int n)
{
    int prev_element=arr[0];
    arr[0]=arr[0]*arr[1];
    for(int i=1;i<n;i++)
    {
        int current_element=arr[i];
        arr[i]=prev_element*arr[i+1];
        prev_element=current_element;
    }
    arr[n-1]=prev_element*arr[n-1];
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
    Multiply_prev_next(arr,n);
    return 0;
}