#include<stdio.h>
int main()
{
    int a[100];
    int n;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered elements are: \n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",a[j]);
    }
    int large;
    int small;
    large=small=a[0];
    //Finding max and min element in the array
    for(int i=1;i<n;i++)
    {
        if(a[i]>large){
            large=a[i];
        }
        if(a[i]<small){
            small=a[i];
        }
    }
    printf("The largest element in the array is : %d\n",large);
    printf("The smallest element in the array is : %d\n",small);
    return 0;
}