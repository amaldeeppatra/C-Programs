#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        j=1;
        for(j; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}