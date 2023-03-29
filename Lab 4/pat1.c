#include<stdio.h>

int main(){
    int i=1;
    for (i; i<=5; i++){
        int j=1;
        for (j; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}