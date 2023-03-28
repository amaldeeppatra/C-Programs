#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two nos.: ");
    scanf("%d %d", &a, &b);
    if (a>b){
        printf("%d is the largest no.", a);
    }
    if(b>a){
        printf("%d is the largest no.", b);
    }
    else{
        printf("Both nos. are equal");
    }
}