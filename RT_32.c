/*WAP that finds the sum of diagonal elements of a mxn matrix.*/
#include<stdio.h>

void printing(int m,int n,int arr[m][n])
{
    printf("The matrix entered is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void add_diagonal(int m,int n,int arr[m][n])
{
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("The sum of diagonal elements is %d\n",sum);
}

int main()
{
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    printing(m,n,matrix);
    add_diagonal(m,n,matrix);
    return 0;
}