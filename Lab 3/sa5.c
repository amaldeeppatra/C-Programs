#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    float r1, r2;
    printf("Write the coefficient of x^2 : ");
    scanf("%d", &a);
    printf("Write the coefficient of x : ");
    scanf("%d", &b);
    printf("Write the constant part : ");
    scanf("%d", &c);
    r1 = (sqrt(pow(b, 2)-(4*a*c)) - b) / (2*a);
    r2 = (-sqrt(pow(b, 2)-(4*a*c)) - b) / (2*a);
    printf("Roots of the equation %dx^2 + %dx + %d = 0 are %f and %f", a,b,c,r1,r2);
}