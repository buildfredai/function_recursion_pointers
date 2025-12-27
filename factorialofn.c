// Factorial of n 

#include<stdio.h>

// function prototype

int fac(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial: %d\n",fac(n));           //argument
}

int fac(int n){
    if (n==1){      //parameter
        return 1;
    }
    int facnm1 = fac(n-1);
    int facn = facnm1 * n;
    return facn;
}