#include<stdio.h>

int main(){
    int d, k, m;
    printf("Enter the distance in meters: ");
    scanf("%d", &d);
    k = d/1000;
    m = d%1000;
    printf("The distance entered is %d km and %d m", k, m);
}