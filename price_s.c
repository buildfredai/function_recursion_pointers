#include<stdio.h>

int main()
{
    float price[3];
    printf("enter price of item 1: ");
    scanf("%f",&price[0]);

    printf("enter price of item 2: ");
    scanf("%f",&price[1]);

    printf("enter price of item 3: ");
    scanf("%f",&price[2]);

    printf("total price of item 1: %.2f\n", price[0]+0.18*price[0]);
    printf("total price of item 2: %.2f\n", price[1]+0.18*price[1]);
    printf("total price of item 3: %.2f\n", price[2]+0.18*price[2]);
    return 0;
}