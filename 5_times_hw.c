//printing n times hello worm!!

#include<stdio.h>

// function prototype
void printhw(int n);

int main(){
    int n;
    printf("Enter the number of times you want to print the word: ");
    scanf("%d",&n);
    printhw(n);         //function call/argument
}

//function definition
void printhw(int n){        //parameter 
    if(n==0){
        return;
    }
    printf("Hello Worm!!\n");        
    printhw(n-1);
}