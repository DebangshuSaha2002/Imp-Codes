#include <stdio.h>

void magic(int n){
    int magicSquare[50][50];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            magicSquare[i][j] = 0;

    int r = n-1;
    int c = n/2;

    for(int i=0; i<=(n*n);){
        if(r == -1)
            r = 0;
        if(c == -1)
            c = n-1;
        if(magicSquare[r][c])
            r++;
        
        magicSquare[r][c] = i++;

        r--;
        c--;
    }

    printf("Sum of each row, colum or diagonal is: %d", n*(n*n +1)/2);
    printf("\nThe magic matrix is: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", magicSquare[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    if(n%2 != 1)
        printf("Magic Matrix not possible for even values.");
    else
        magic(n);

    return 0;
}