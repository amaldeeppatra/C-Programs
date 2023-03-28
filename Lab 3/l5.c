#include<stdio.h>

int main(){
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtaction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("%d + %d = %d", a, b, a+b);
        break;
    case 2:
        printf("%d - %d = %d", a, b, a-b);
        break;
    case 3:
        printf("%d * %d = %d", a, b, a*b);
        break;
    case 4:
        printf("%d / %d = %d", a, b, a/b);
        break;
    default:
        break;
    }
}