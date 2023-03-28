#include<stdio.h>

int main(){
    float n;
    printf("Enter the number: ");
    scanf("%f", &n);
    if (n==0){
        printf("Absolute value is %.f only", n);
    }
    else{
        if (n>0){
            printf("Absolute value is %.f", n);
        }
        else{
            printf("Absolute value is %.f", n*-1);
        }
    }
}