#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The given two numbers are %d and %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("The numbers after swapping are %d and %d", a, b);
}