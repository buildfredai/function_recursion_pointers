//print a table of any number

#include<stdio.h>

//function prototype

void table(int n);

int main(){
    int x;
    printf("Enter the number to find the table: ");
    scanf("%d",&x);
    table(x);       //argument/actual parameter/call function
}

void table(int n){ //parameter/formal parameter/called funtion
    for(int y =1;y<11;y++){
        printf("%d * %d = %d\n",n, y,y*n);
    }
}
