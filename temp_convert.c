//Write a function to convert celsius to fahrenheit.
#include<stdio.h>

//Function declaration/prototype
float celtofer(float c);   //celtofer = celcius to fahrenheit
float fertocel(float f);   //fertocel = vice versa of celtofer

int main(){
    int choice;
    float celsius = 6,fahrenheit=10;

    printf("1.Celcius to Fahrenheit\n2.Fahrenheit to Celcius\nChooose the index: ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Enter celcius: ");
        scanf("%f",&celsius);
        printf("Fahrenheit = %.2f\n",celtofer(celsius));    //function call
    }
    else if (choice ==2){
        printf("Enter Fahrenheit: ");
        scanf("%f",&fahrenheit);
        printf("Celcius = %.2f\n",fertocel(fahrenheit));    //function call/actual parameter/argument
    }
    else{
        printf("Invalid Input!!\n");
    }
}

//function definition
float celtofer(float c){        //formal prameter/parameter
    float result = (c*9.0/5.0)+32;
    return result;      //return value
}

float fertocel(float f){
    float result = (f-32)*5.0/9.0;
    return result;      //return value
}