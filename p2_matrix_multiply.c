#include<stdio.h>
int main()
{
    int r,c,i,j,k;
    int arr1[10][10];
    int sum[10][10];
    int arr2[10][10];
    int multiply[10][10];
    printf("Enter the no. of rows\n");
    scanf("%d",&r);
    printf("Enter the no. of columns\n");
    scanf("%d",&c);
    printf("\nEnter elements for array:1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for array index arr[%d][%d]\n",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter elements for array:2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for array index arr[%d][%d]\n",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            multiply[i][j]=0;
            for(k=0;k<c;k++)
            {
                multiply[i][j]=multiply[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
    }
    printf("\nThe final Multiplied matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",multiply[i][j]);
        }
        printf("\n");
    }
    return 0;
}