//print a value of price from it's pointer to pointer
#include<stdio.h>
int main(){
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%.2f\n", price);
    printf("%.2f\n", *ptr);
    printf("%.2f\n", **pptr);
}