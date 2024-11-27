#include<stdio.h>
struct item
{
    char item_name[100];
    int quantity;
    int price;
    int amount;
};

void list(int n)
{
    struct item Sn;
    printf("enter name of item\n");
    scanf("%s",&Sn.item_name);
    printf("enter quantity\n");
    scanf("%d",&Sn.quantity);
    printf("enter price\n");
    scanf("%d",&Sn.price);
    Sn.amount=Sn.price*Sn.quantity;
    printf("amount :%d\n",Sn.amount);
}

int main()
{
    printf("enter number of items\n");
    int b;
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        list(i);
    }
}