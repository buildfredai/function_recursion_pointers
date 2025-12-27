/* Write functions to find the sum, multiplication and avgerage of 2 numbers. print it in main function.*/
#include<stdio.h>

//function declaration / prototype
int sum(int num1,int num2);
int mul(int num1 , int num2);
int avg(int num1 , int num2);

int main()
{
    int num1 , num2;
    printf("Enter first number: ");
    scanf("%d",&num1);      //input
    printf("Enter second number: ");
    scanf("%d",&num2);      //input

    printf("Sum = %d\n",sum(num1,num2));        //function call/argument/actual parameter
    printf("Multiplication = %d\n",mul(num1,num2));
    printf("Average = %d\n",avg(num1,num2));
    return 0;
}
// function definition
int sum(int num1 , int num2){       //called function/parameter/formal parameter
    return num1+num2;
}

int mul(int num1 , int num2){
    return num1 * num2;
}

int avg(int num1 , int num2){
    return (num1+num2)/2;
}