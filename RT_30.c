/*WAP to add and multiply two matrices of order nxn.*/

#include<stdio.h>

void printing(int n,int matrix[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrix(int n,int matt[n][n],int matt1[n][n])
{
    int add[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            add[i][j]=matt[i][j]+matt1[i][j];
        }
    }
    printing(n,add);
}

void add_elements(int n,int matrix[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Index [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe matrix is: \n");
    printing(n,matrix);
}

void multiply(int n,int matt[n][n],int matt1[n][n])
{
    int mul[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<n;k++)
            {
                mul[i][j]+=matt[i][k]*matt1[k][j];
            }
        }
    }
    printing(n,mul);
}

int main()
{
    int n;
    printf("Order of the matrix: ");
    scanf("%d",&n);
    int matrix1[n][n];
    int matrix2[n][n];
    printf("Enter the elements for matrix 1:\n");
    add_elements(n,matrix1);
    printf("Enter the elements for matrix 2:\n");
    add_elements(n,matrix2);
    printf("\nThe matrix after adding is: \n");
    add_matrix(n,matrix1,matrix2);
    printf("\nThe matrix after multiplication is: \n");
    multiply(n,matrix1,matrix2);

    return 0;
}