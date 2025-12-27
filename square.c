//use library function to find the square of a input number
#include<stdio.h>
#include<math.h>
//function prototype
int square(int n);

int main(){
    int n;
    printf("Enter a number to find the square: ");
    scanf("%d",&n);
    printf("Square of %d is : %d\n",n,square(n));   //function calling / argument
}

//function definition
int square(int n){
    return pow(n, 2);  //use math.h to use pow(....) / parameter
}