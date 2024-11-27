// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char *sname[3];
//     for(int i=0;i<3;i++)
//     {
//         sname[i]=(char*)malloc(3*sizeof(char));
//     }
//     printf("enter student name\n");
//     for(int i=0;i<3;i++)
//     {
//         gets(sname[i]);
//     }
//     printf("student name\n");
//     for(int i=0;i<3;i++)
//     {
//         puts(sname[i]);
//     }
//     // char *temp;
//     // for(int i=0;i<3;i++)
//     // {
//     //     for(int j=0;j<3;j++)
//     //     {
//     //         if(strcmp(*sname[i],*sname[j])>0)
//     //         {
//     //             strcpy(temp,sname[i]);
//     //             strcpy(sname[i],sname[j]);
//     //             strcpy(sname[j],temp);
                
//     //         }
//     //     }
//     // }
//     //  printf("student name\n");
//     // for(int i=0;i<3;i++)
//     // {
//     //     puts(sname[i]);
//     // }
//     printf("%s",sname[0]);


// }

#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int roll;
    int age;
};

int main()
{
    char c[]='manav';
    struct student ai[3];
    for(int i=0;i<3;i++)
    {   
        printf("enter sudent details\n");
        gets(ai[i].name);
        scanf("%d",&ai[i].roll);
        scanf("%d",&ai[i].age);
    } 
    for(int i=0;i<3;i++)
    {
        if(strcmp(ai[i].name,c)==0)
        {
            puts(ai[i].name);
            
            printf("%d",ai[i].roll);
            printf("%d",ai[i].age);
        }
    }
}