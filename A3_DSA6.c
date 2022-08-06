/*Given an array, WAP to print the next greater element (NGE) for every element. The
next greater element for an element x is the first greater element on the right side 
of x in array. Elements for which no greater element exist, consider next greater 
element as -1. E.g. For the input array [2, 5, 3, 9, 7], the next greater elements 
for each elements are as follows.*/
#include<stdio.h>
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
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        ans=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                ans=arr[j];
                break;
            }
        }
        printf("The next greater element of %d is %d\n",arr[i],ans);
    }
    return 0;
}