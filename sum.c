/* take 2 value then return sum*/
#include<stdio.h>

//function prototype
int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    int s = sum(a,b);   //func
    printf("%d\n",s);
    return 0;
}

int sum(int a, int b){
    return a+b;
}|