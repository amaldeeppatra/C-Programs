#include<stdio.h>

int main(){
    int yr, d;
    printf("Enter the year: ");
    scanf("%d", &yr);
    d = (yr-1)*365 + (yr-1) / 4 - (yr-1) / 100 + (yr-1) / 400;
    switch(d%7){
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday");
            break;
        case 6:
            printf("Sunday");
            break;
    }
}