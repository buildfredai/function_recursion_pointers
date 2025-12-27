// sum of n natural numbers
#include<stdio.h>

//function prototype 
int nsum(int n);

int main(){
    int a;
    printf("Write a number: ");
    scanf("%d",&a);
    printf("The sum is %d.\n",nsum(a));       //function call
    return 0;
}

//function definition
int nsum(int n){
    if (n==1){      //base case
        return 1;
    }
    int sumnm1 = nsum(n-1);     // sum of n-1
    int sumN = sumnm1 + n;
    return sumN;
}