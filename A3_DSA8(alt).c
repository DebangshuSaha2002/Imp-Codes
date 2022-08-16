#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    if(n<2)
    {
        printf("Invalid Input");
    }
    else
    {
        int temp;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i]<=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second largest element in the array is %d\n",a[n-1]);
    printf("The second smallest element in the array is %d\n",a[2]);
    }
    return 0;
}