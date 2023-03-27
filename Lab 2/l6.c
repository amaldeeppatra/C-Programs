#include<stdio.h>

int main(){
    int t, h, m, s;
    printf("Enter the time in seconds: ");
    scanf("%d", &t);
    h = t/3600;
    m = (t%3600)/60;
    s = t-(h*3600)-(m*60);
    printf("Give time is %d hours, %d minutes and %d seconds", h, m, s);
}