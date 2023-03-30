#include<stdio.h>

int main(){
    int arr[100];
    for (int i=0; i<100; i++){
        arr[i]=i+101;
    }
    for (int i=0; i<100; i++){
        if (arr[i]%2==0){
            printf("%d\n", arr[i]);
        }
    }
}