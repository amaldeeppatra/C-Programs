#include<stdio.h>

int main(){
    int m=0,n,a,i,s=0;
    a=0;
    i=1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d ",i);
    while(m<n){
        s=a+i;
        a=i;
        i=s;
        if (s>n){
            break;
        }
        printf("%d ", s);
        m++;
    }
}