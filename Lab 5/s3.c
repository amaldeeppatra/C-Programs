#include<stdio.h>

int main(){
    int arr[5]={12,53,24,3,20};
    int n;
    for (int i=0; i<5; i++){
        if (arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("%d", arr[0]);
}