#include <stdio.h>
#include <stdlib.h>
void nonzero(int **arr, int n)
{
    int non = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                non++;
            }
        }
    }
    printf("Total non zero elements in the matrix is %d\n", non);
}
void sumabove(int **arr, int n) 
{
    int s= 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            s=s + arr[i][j];
        }
    }
    printf("The sum of the elements above the leading diagonal of the matrix is: %d\n",s);
}
void below_diag_display(int **arr, int n)
{
    printf("\nDisplaying the elements below the minor diagonal\n");
    int l=0;
    for (int i = 1; i <n;i++)
    {
        for (int j = 0; j<=l;j++)
        {
            printf("%d\n",arr[i][j]);
        }
        l++;
    }
}
void product(int **arr, int n) 
{
    int m=1;
    for (int i = 0; i<n;i++)
    {
        for (int j=i; j==i;j++)
        {
            m = m*arr[i][j];
        }
    }
    printf("\nThe product of the diagonal element is: %d\n", m);
}
int main()
{
    int n, i, j;
    int **arr;
    printf("Enter the order n for the matrix A:\n");
    scanf("%d", &n);
    arr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    int g = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element for matrix:A, index arr[%d][%d]\n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Input matrix:A is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    nonzero(arr, n);
    sumabove(arr, n);
    below_diag_display(arr, n);
    product(arr, n);
    return 0;
}