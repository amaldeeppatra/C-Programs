#include<stdio.h>

int main(){
    int n=5, i, j=n, temp;
    int a[]={1,2,3,4,5};
    for (i=0; i<=j; i++){
        if (a[i]%2==0){
            while (j>i){
                j--;
                if (a[j]%2!=0){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
    for(i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
}