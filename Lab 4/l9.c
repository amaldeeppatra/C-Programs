#include<stdio.h>

int main(){
    int i=0, n, n1, a=0, r;
    printf("Enter the number: ");
    scanf("%d", &n);
    n1 = n;
    while (n>0){
        r = (n%10)*(n%10)*(n%10);
        a += r;
        n /= 10;
    }
    printf("%d\n", a);
    if (n1==a){
        printf("%d is an Armstrong number", n1);
    }
    else{
        printf("%d is not an Armstrong number", n1);
    }
}