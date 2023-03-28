#include<stdio.h>

int main(){
    int x1,y1;
    int x2,y2;
    int x3,y3;
    int a;
    printf("Enter the first coordinate: ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter the second coordinate: ");
    scanf("%d,%d", &x2, &y2);
    printf("Enter the third coordinate: ");
    scanf("%d,%d", &x3, &y3);
    a = (x1*(y2-y3)-y1*(x2-x3)+(x2*y3 - x3*y2))/2;
    if (a==0){
        printf("The points fall on a straight line");
    }
    else{
        printf("They dont");
    }
}