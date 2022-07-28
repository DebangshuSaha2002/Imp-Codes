#include <stdio.h>
#include <math.h>
int main(){
    int store[32];
    int c = 1;    
    for(int i = 0 ; i<=24 ; i=i+8)
    {
        printf("Enter the Elements of B%d : \n",c);
        for(int j = i;j<(i+8);j++)
        {
            scanf("%d",&store[j]);
        }
        c++;
    }
    int s = 0;
    for(int i = 0;i<32;i++)
    {
        s = s + store[i]*pow(2,(31-i));
    }
    printf("The Number is : %d",s);
    return 0 ;
}