//display call by reference and call by value difference
#include<stdio.h>
#include<math.h>
//function prototype
int square(int n);
void _square(int *n);

int main(){
    int n;
    printf("Enter a number to find the square: ");
    scanf("%d\n",&n);
    
    printf("Square of %d is : %d\n",n,square(n));   //function calling / argument
    printf("number = %d\n\n",n);

    _square(&n);
    printf("number = %d\n",n);
}
//function definition

//changes in value. /call by value
int square(int n){
    return pow(n, 2);  //use math.h to use pow(....) / parameter
}

//changes in address.  /call by reference
void _square(int *n){
    *n = pow(*n,2);
    printf("_square = %d\n", *n);
}