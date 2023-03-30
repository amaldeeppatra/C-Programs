#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++){
        if ((arr[0]<arr[i])&&arr[i]%2==0){
            arr[0]=arr[i];
        }
    }
    printf("The largest even number is %d", arr[0]);
}