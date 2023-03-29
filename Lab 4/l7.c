#include<stdio.h>

int main(){
    int n=0, i=0, r;
    printf("Enter the range: ");
    scanf("%d", &r);
    printf("Even: ");
    for (i; i<r; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("Odd: ");
    for (n; n<r; n++){
        if (n%2 != 0){
            printf("%d ", n);
        }
    }
}