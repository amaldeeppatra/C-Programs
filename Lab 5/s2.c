#include<stdio.h>

int main(){
    int arr[]={1,2,3,4};
    int s=0;
    for (int i=0; i<4; i++){
        s = s+arr[i];
    }
    printf("%d", s);
}