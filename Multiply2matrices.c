/*C Program to multiple two matrix*/

#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int a[10][10], b[10][10], mul[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &a[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &b[c][d]);
 // logic for multiplication
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + a[c][k]*b[k][d];
        }
 
        mul[c][d] = sum;
        sum = 0;
      }
    }

 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", mul[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}