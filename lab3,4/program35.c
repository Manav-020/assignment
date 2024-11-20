
#include <stdio.h>

int main() {
    int sum=0,b, n;
    printf("enter num\n");
    scanf("%d",&n);
    for(;n!=0;)
    {
        b=n%10;
        sum+=b;
        n=n/10;
        if(sum>10)
        {
            n=sum;
            sum=0;
        }
    }
    printf("sum till single digit is: %d",sum);
    return 0;
}
