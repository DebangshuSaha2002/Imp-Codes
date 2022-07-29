#include<stdio.h>

struct student 
{
    char name[20];
    int rollno;
    int marks[5];
    int total;
    char grade;
};
int main()
{
    int n,i,j;
    printf("Enter the number of students data\n");
    scanf("%d",&n);
    struct student s[n],t;
    for(i=0;i<n;i++)
    {
        printf("Name of student:%d\n",(i+1));
        scanf("%s",s[i].name);

        printf("Roll number of student:%d\n",(i+1));
        scanf("%d",&s[i].rollno);

        printf("Enter marks for 5 subjects of student:%d\n",(i+1));
		scanf("%d%d%d%d%d",&s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4]);

		s[i].total = s[i].marks[0]+s[i].marks[1]+s[i].marks[2]+s[i].marks[3]+s[i].marks[4];
		printf("Total Marks of %d student = %d\n",(i+1), s[i].total);
    }
    // for(i=0;i<n;i++)
    // {
    //     if(s[i].total>=90 && s[i].total<=100){
    //         s[i].grade="A";
    //     }
    //     else if (s[i].total>=80 && s[i].total<90){
    //         s[i].grade="B";
    //     }
    //     else if (s[i].total>=70 && s[i].total<80){
    //         s[i].grade="C";
    //     }
    //     else{
    //         s[i].grade="F";
    //     }
    // }
    //Sorting
    for (i=0; i<n-1; i++)
    {    
        for (j=i+1; j<n; j++)
        {       
            if (s[i].total > s[j].total)
            {          
                t=s[i];          
                s[i] = s[j];          
                s[j] = t;
            }
        }
    }
    printf("\nSorted in ascending order\n");
    for(i=0;i<n;i++)
    {
        printf("Name of the student is %s\n",s[i].name);
        printf("Roll No of the student is %d\n",s[i].rollno);
        printf("Total marks of the student is %d\n",s[i].total);
        // printf("The grade of the student is %c\n",s[i].grade);
    }
    return 0;
}