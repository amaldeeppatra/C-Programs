#include<stdio.h>

int main(){
    int b, h, a;
    printf("Enter the base of the triangle: ");
    scanf("%d", &b);
    printf("Enter the height of the triangle: ");
    scanf("%d", &h);
    a = 0.5*b*h;
    printf("The area of the triangle is %d", a);
}