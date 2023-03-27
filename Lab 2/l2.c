#include<stdio.h>

int main(){
    float r, a;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = 3.14*r*r;
    printf("The area of the circle is %f", a);
}