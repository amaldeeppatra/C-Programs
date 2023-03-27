#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Given numbers: %d and %d\n", a,b);
    (a^=b), (b^=a), (a^=b);
    printf("Numbers after swapping: %d and %d", a,b);
}