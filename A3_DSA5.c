/*Given an unsorted array of size n, WAP to find and display the number of 
elements between two elements a and b (both inclusive). 
E.g. Input : arr = [1, 2, 2, 7, 5, 4], a=2 and b=5, Output : 4 and the numbers are: 
2, 2, 7, 5.*/
#include <stdio.h>

int main()
{
    int n,i,a,b,c=0,d=2;

    printf("Enter size of array: ");
    scanf("%d",&n);
    
    printf("Enter elements of array: \n");

    int arr[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
 
    printf("\nEnter lower limit element & upper limit element respectively: \n");
    scanf("%d %d",&a,&b);

    for(i=0;i<n;i++){ 
        if(arr[i]==a || arr[i]==b){
            c++;
            d=0;
            printf("%d\n",arr[i]);
        }
        
        if(arr[i]>a && arr[i]<b){
            c++;
            printf("%d\n",arr[i]);
        }
    }

    printf("Number of elements in between two elements (Both Inclusive) = %d",c+d);

    return 0;
}