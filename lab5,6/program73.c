#include<stdio.h>
int main()
{
    int v,v1=0,v2=0,v3=0,v4=0,v5=0,v6=0;
     printf("\npress 1 to vote candidate 1\n");
        printf("\npress 2 to vote candidate 2\n");
        printf("\npress 3 to vote candidate3\n");
        printf("\npress 4 to vote candidate 4\n");
        printf("\npress 5 to vote candidate 5\n");
    for(int i=0;;i++)
    {
        
        scanf("%d",&v);
        if(v==1)
        {
            v1++;
        }
        else if(v==2)
        {
            v2++;
        }
        else if(v==3)
        {
            v3++;
        }
        else if(v==4)
        {
            v4++;
        }
        else if(v==5)
        {
            v5++;
        }
        else
        {
            v6++;
        }
        printf("\tvotes of candidate 1: %d\t",v1);
        printf("\tvotes of candidate 2: %d\t",v2);
        printf("\tvotes of candidate 3: %d\t",v3);
        printf("\tvotes of candidate 4: %d\t",v4);
        printf("\tvotes of candidate 5: %d\t",v5);
        printf("\tspoiled votes: %d\t",v6);
        
    }
    return 0;
}