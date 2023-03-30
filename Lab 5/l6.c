#include <stdio.h>

int main () {
    int arr[]={2,7,8,3,6};
    int new[5];
    int c;
    for (int i=0; i<5; i++){
        c = (i-4)*-1;
        new[i]=arr[c];
    }
    for (int i=0; i<5; i++){
        printf("%d\n", new[i]);
    }
}