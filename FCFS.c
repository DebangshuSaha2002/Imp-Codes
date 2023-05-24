//FCFS Algorithm

#include <stdio.h>
const int num=7;
void allprocesshasfinished(int n,int arr[num][num])
{

}

int main()
{
    int num;
    printf("Enter num of processes:");
    scanf("%d",&num);
    int arr[num][num];
    // enterdata(arr,num);
    // displaydata(arr,num);
    int at=0;
    int bt=0;
    int or=0;
    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j <= 2; ++j)
        {
            scanf("%d ", &arr[i][j]);
        }
    }

    for(int i=0;i<=7;i++)
    {
        for(int j=3;j<=7;j++)
        {
            arr[i][j]=1;
        }
    }    

    //displaying
    printf("AT\tBT\tOrd\tRem\tRT\tWT\tTAT\tTERM\t\n");
    for (int i = 0; i < num; ++i)
    {
        for (int j = 0; j <=7; ++j)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    int ct=0;
    while(!allprocesshasfinished(num,arr)
    {
        int x=next_process_to_run(arr,num,ct);
    }
    return 0;
}