#include<stdio.h>

int main(){
    int arr[5]={67,75,58,74,69};
    int temp[1];
    for (int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    printf("---\n");
    for (int j=0; j<5; j++){
        for (int i=0; i<5; i++){
            if (arr[i]>arr[i+1]){
                temp[0]=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp[0];
            }
        }
    }
    for (int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
}