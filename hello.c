/*Write 2 functions - one to print "Hello!" and second to rint "Good Bye! */
#include<stdio.h>

// function prototype
void printhello();
void printgoodbye();


int main()
{
    printhello(); //function call
    printgoodbye();
    printhello();
    printhello();
    printhello();
    return 0;
}

// function definition
void printhello(){
    printf("Hello!!\n");
}
void printgoodbye(){
    printf("Good Bye!!\n");
}