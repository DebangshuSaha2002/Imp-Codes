#include<stdio.h>

struct name_city
{
    char name[20];
    int age;
    char city[20];
};

int main(){
    struct name_city n[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name of person \n");
        scanf("%s",n[i].name);
        printf("Enter the age of person \n");
        scanf("%d",&n[i].age);
        printf("Enter the city of person \n");
        scanf("%s",n[i].city);  
    }
    int minage=0;
    for(i=0;i<5;i++)
    {
        if(minage<n[i].age)
        {
            minage=i;
        }
    }
    printf("The details for min age are:\n");
    printf("%s\t%d\t%s\n",n[minage].name,n[minage].age,n[minage].city);

    return 0;
}