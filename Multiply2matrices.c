/*C Program to multiple two matrix*/

#include <stdio.h>
 
int main()
{
  int m, n, k, c, d, j, sum = 0;
  int a[10][10], b[10][10], mul[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
  for (c = 0; c < m; c++)
    {
      for (d = 0; d < n; d++)
      {
        scanf("%d", &a[c][d]);
      }
    }

 
  printf("Enter number of columns of second matrix\n");
  scanf("%d",&k);

  printf("Enter elements of second matrix\n");
 
    for (c = 0; c < n; c++)
    {
      for (d = 0; d < k; d++)
      {
        scanf("%d", &b[c][d]);
      }
    }
 // logic for multiplication
    for (c = 0; c < m; c++) 
    {
      for (d = 0; d < k; d++) 
      {
        for (j = 0; j < n; j++) 
        {
          sum = sum + a[c][j]*b[j][d];
        }
 
        mul[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < k; d++)
      {
        printf("%d\t", mul[c][d]);
      }
 
      printf("\n");
    }
  return 0;
}