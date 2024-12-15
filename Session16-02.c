#include<stdio.h>
void num(int *a, int *b);
int main(void){
    int num1= 10;
    int num2= 20;
    printf("num1= %d\n", num1);
    printf("num2= %d\n", num2);
    num(&num1, &num2);
    printf("num1= %d\n", num1);
    printf("num2= %d\n", num2);
    return 0;
}
void num(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
    
}
