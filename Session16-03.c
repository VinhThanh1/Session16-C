#include<stdio.h>
void sumNumber(int *a, int *b, int *sum);
int main(void){
    int num1=10;
    int num2=20;
    int sum;
    sumNumber( &num1, &num2, &sum);
    printf("Tong cua num1 va num2 la: %d \n", sum);
    return 0;
}
void sumNumber(int *a, int *b, int *sum){
    *sum= *a + *b;
}
