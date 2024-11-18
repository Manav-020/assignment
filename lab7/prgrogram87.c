#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    int age;
    char gender[20];
    int marks;
    
};

void main()
{
    struct student ai[3];
    
    for(int i=0;i<3;i++)
    {
        printf("\nenter details of student\n");
        printf("\nenter name \n");
        scanf("%s",&ai[i].name);
        printf("\nenter roll no. \n");
        scanf("%d",&ai[i].roll);
        printf("\nenter gender \n");
        scanf("%s",&ai[i].gender);
        printf("\nenter marrks out of thousand\n");
        scanf("%d",&ai[i].marks);
    }
    for(int i=0;i<3;i++)
    {
        if(ai[i].marks>500)
        {  
            printf("\n name= ");
            puts(ai[i].name);
            printf("\n roll no.=%d",ai[i].roll);
            printf("\n gender= %s ",ai[i].gender);
            printf("\n marks= %d",ai[i].marks);

        }
    }
    
}
