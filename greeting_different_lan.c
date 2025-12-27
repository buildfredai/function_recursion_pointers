/*Write a function that prints namaste if user is indian and bonjour if user is french*/

#include<stdio.h>

//function prototype
void printnamaste();
void printbonjour();

int main()
{
    int user_country;
    printf("1. India \n2.France\nChoose your country index: ");
    scanf("%d",&user_country);

    if(user_country==1){
        printnamaste();         //function call
    }
    else if(user_country==2){
        printbonjour();
    }
    else{
        printf("invalid input!!\n");
    }
    return 0;
}

//function definition
void printnamaste(){
    printf("Namaste!!\n");
}
void printbonjour(){
    printf("Bonjour!!\n");
}