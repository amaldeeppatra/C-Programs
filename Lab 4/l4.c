#include<stdio.h>

int main(){
    int i=0, n, a=1;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for(i; i<n; i++){
        printf("%d ", a);
        a = (a*2)+1;
        if (a>n){
            break;
        }
    }
}