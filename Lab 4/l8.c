#include<stdio.h>

int main(){
    int i=0, n, r=0, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n>0){
        a = n%10;
        r = r*10 + a;
        n /= 10;
    }
    printf("%d", r);
}