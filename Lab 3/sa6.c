#include<stdio.h>

int main(){
    int n;
    printf("Enter the marks: ");
    scanf("%d", &n);
    n /= 10;
    n += 1;
    switch (n){
        case 10:
            printf("O");
            break;
        case 9:
            printf("E");
            break;
        case 8:
            printf("A");
            break;
        case 7:
            printf("B");
            break;
        case 6:
            printf("C");
            break;
        case 5:
            printf("D");
            break;
        default:
            printf("Fail");
    }
}