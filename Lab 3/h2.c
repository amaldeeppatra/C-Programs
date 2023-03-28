#include<stdio.h>

int main(){
    int a;
    int b;
    char s;
    printf("Enter the operation you want to do: ");
    scanf("%c", &s);
    printf("Enter first operand: ");
    scanf("%d", &a);
    printf("Enter second operand: ");
    scanf("%d", &b);
    switch (s){
        case '+':
            printf("%d + %d = %d", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d", a, b, a/b);
            break;
        case '%':
            printf("%d %% %d = %d", a, b, a%b);
            break;
        default:
            printf("\nUnknown command");
    }
}