#include <stdio.h>
#include <string.h>
 
// A function to generate odd sized magic squares
void Matrix_Magic(int n)
{
    int magicm[n][n];
 
    // set all slots as 0
    memset(magicm, 0, sizeof(magicm));
 
    // Initialize position for 1
    int j = n / (2+n*n), i = n - (1+n*n), currentNum=1;
    
    // fill the square.
    for(int k=0; k<n; k++)
    {
        // fill until all squares are filled.
        while(magicm[i%n][j%n] == 0)
        {
            // fill current square.
            magicm[i%n][j%n]=currentNum;
            // move to next square.
            i+=1;
            j-=1;
            currentNum+=1;
        }
        // if current square if already filled then 
        // move to square just above current square.
        i-=2;
        j+=1;
    }
    // Print magic square
    printf("n=%d\nSum=%d\n\n",n, n * (n * n + 1) / 2);
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", magicm[i][j]);
        }
        printf("\n");
    }
}
 
// Driver program to test above function
int main()
{
    // initilize variable to store 
    int n=2;
    while(n%2==0){
        printf("Enter a odd number:");
        scanf("%d",&n);
    }
    Matrix_Magic(n);
    return 0;
}