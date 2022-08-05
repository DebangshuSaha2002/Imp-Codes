#include <stdio.h>
#include<string.h>
struct Timer{
    int hour;
    int min;
};
struct Railway{
    char name[20];
    char time[10];
    struct Timer timer;
};
int main(){
    char a[3];
    struct Railway train[5];
    for(int i = 0;i<5;i++){
        printf("Enter the Details of Train %d\n",i+1);
        printf("Name : ");
        scanf("%s",train[i].name);
        printf("Time in hh : ");
        scanf("%d",&train[i].timer.hour);
        printf("Time in mm : ");
        scanf("%d",&train[i].timer.min);
        printf("Enter string 'am' or 'pm' : ");
        scanf("%s", a);
        printf("\n");
    }
    for(int i = 0;i<5;i++){
        if(train[i].timer.hour <= 12 && train[i].timer.min <= 59)      
        {
            if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) 
            && (train[i].timer.hour != 0) && (train[i].timer.hour != 12))
        {
            train[i].timer.hour = train[i].timer.hour + 12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (train[i].timer.hour == 12))
        {
            train[i].timer.hour = 0;
        }
        printf("\nThe Details of the Trains :---\n");
    for(int i = 0;i<5;i++){
        printf("Name : %s --- Time : %02d:%02d\n",train[i].name,train[i].timer.hour,train[i].timer.min);
    }
    return 0;
}
    }
}

//     }
//     printf("\nThe Details of the Trains :---\n");
//     for(int i = 0;i<5;i++){
//         printf("Name : %s --- Time : %02d:%02d\n",train[i].name,train[i].timer.hour,train[i].timer.min);
//     }
//     return 0;
// }