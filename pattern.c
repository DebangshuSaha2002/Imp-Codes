/*
    *
   **
  ***
 ****
*****
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value for n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf(" ");
        }
        for(int l=1;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}