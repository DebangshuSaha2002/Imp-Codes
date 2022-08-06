/*Let A be nXn square matrix. WAP by using appropriate user defined functions for the
following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    printf("Enter the order for the matrix\n");
    scanf("%d", &n);
    int arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element for array index arr[%d][%d]\n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("The matrix is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Number of non zero elements in matrix arr

    printf("\n Checking for non zero elements in matrix \n");
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
    printf("\n\n");

    //Finding sum of elements above the leading diagonal

    int s= 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            s=s + arr[i][j];
        }
    }
    printf("The sum of the elements above the leading diagonal of the matrix is: %d\n",s);
    printf("\n\n");

    //Displaying elements below the minor diagonal

    printf("Displaying the elements below the minor diagonal\n");
    int l=0;
    for (int i = 1; i <n;i++)
    {
        for (int j = 0; j<=l;j++)
        {
            printf("%d\n",arr[i][j]);
        }
        l++;
    }
    printf("\n\n");

    //Finding the product of the diagonal element
    
    int m=1;
    for (int i = 0; i<n;i++)
    {
        for (int j=i; j==i;j++)
        {
            m = m*arr[i][j];
        }
    }
    printf("The product of the diagonal element is: %d\n", m);
    return 0;
}