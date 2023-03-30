#include<stdio.h>

int main(){
    int arr[]={2,3,1,7,9,0};
    int temp;
    for (int i=0; i<6; i+=2){
        for (int j=i; j<=i; j++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for (int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
}