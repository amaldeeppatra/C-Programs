// This prgm prints all factors of a number given by the user
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if (n%i==0){
            printf("%d is a factor of %d\n", i, n);
        }
    }
}