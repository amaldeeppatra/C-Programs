#include<stdio.h>

int main(){
    float a,b,c,d,e,p;
    printf("Enter marks of first subject: ");
    scanf("%f", &a);
    printf("Enter marks of second subject: ");
    scanf("%f", &b);
    printf("Enter marks of third subject: ");
    scanf("%f", &c);
    printf("Enter marks of fourth subject: ");
    scanf("%f", &d);
    printf("Enter marks of fifth subject: ");
    scanf("%f", &e);
    p = (a+b+c+d+e)/5;
    printf("The average marks is %.2f\n", p);
    printf("Percentage: %.2f%%", p);
}