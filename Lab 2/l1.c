#include<stdio.h>

int main(){
    float f, c;
    printf("Enter the temp in Farhenheit: ");
    scanf("%f", &f);
    c = 0.5556*(f-32);
    printf("Temp in centigrade: %f", c);
}