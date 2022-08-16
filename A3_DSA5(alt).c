#include <stdio.h>

int main()
{
    int num;
    int a,b;
    printf("Enter number of elements to add in the array: \n");
    scanf("%d",&num);

    int arr[num];
    printf("Enter %d elements \n",num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the lower limit of the search: ");
    scanf("%d",&a);
    printf("Enter the upper limit of the search: ");
    scanf("%d",&b);

    int c;
    int n1,n2;
    for(int i=0;i<num;i++)
    {
        if(arr[i]==b)
        {
            n1=i;
        }
        else if(arr[i]==a)
        {
            n2=i;
        }
    }
    int n=n1-n2;
    for(int i=0;i<num;i++)
    {
        if(arr[i]==a)
        {
            for(int j=0;j<num;j++)
            {
                printf("%d\t",arr[i+j]);
                c+=1;
                if(arr[i+j]==b)
                {
                    break;
                }   
            }
        break;
        }    
    }
    printf("\nThe total number of elements in between is %d",c);
    return 0;
}