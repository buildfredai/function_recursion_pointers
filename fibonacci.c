// write a function to print fibonacci series of n terms
#include<stdio.h>

//function declaration/prototype
int fibonacci(int f);

int main(){
    int f;
    printf("Enter a number to find the fibonacci series: ");
    scanf("%d",&f);
    printf("%d\n",fibonacci(f));  //function call
}

int fibonacci(int f){
    if(f==0){
        return 0;
    }
    if(f==1){
        return 1;
    }
    int fib = fibonacci(f-1)+fibonacci(f-2);
    return fib;
}