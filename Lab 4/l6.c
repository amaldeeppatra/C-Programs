#include<stdio.h>

int main(){
    int i, j, n, f;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i=2; i<=n; i++){
        f=0;
        for (j=1; j<=i; j++){
            if (i%j==0){
                f++;
            }
        }
        if (f==2){
            printf("%d ", i);
        }
    }
}