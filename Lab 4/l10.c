#include<stdio.h>

int main(){
    int i=1, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i; i<=n; i++){
        j=i;
        for (j; j>=1; j--){
            printf("%c ", (64+j));
        }
        printf("\n");
    }
}