#include<stdio.h>
int main()
{   
    int n;
    printf("enter nmber details you want to enter\n");
    scanf("%d",&n);
    FILE *sptr;
    sptr=fopen("lmnitstudents.txt","w");
    char name[100];
    int roll[n],marks[n];
    for(int i=0;i<n;i++)
    {
        printf("enter details of student\n");
        printf("enter name\n");
        scanf("%s",&name);
        fprintf(sptr,"student name:%s\n",name);
        printf("enter roll number\n");
        scanf("%d",&roll[i]);
        fprintf(sptr,"student roll number:%d\n",roll[i]);
        printf("enter marks\n");
        scanf("%d",&marks[i]);
        fprintf(sptr,"student marks:%d\n\n",marks[i]);
    }
    fclose(sptr);
}