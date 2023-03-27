#include<stdio.h>

int main(){
    int m, r, p;
    printf("Enter the amount in paisa: ");
    scanf("%d", &m);
    r = m/100;
    p = m%100;
    printf("The amout is %d rupees and %d paisa", r, p);
}
