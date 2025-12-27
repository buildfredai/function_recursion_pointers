// swap 2 numbers using pointers
#include<stdio.h>

//function declaration / prototype
void swap(int x,int y);
void _swap(int *x,int *y);
int main(){
    int a=1,b=2;
    _swap(&a,&b);
    printf("a = %d & b = %d\n", a,b);
    
}

void swap(int x, int y){
    int t=x;
    x = y;
    y = t;
    printf("x = %d & y = %d\n", x,y);
}

void _swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
    printf("x = %d & y = %d\n", *x,*y);
}