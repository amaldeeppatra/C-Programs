#include <stdio.h>

int main(){
    int n;
    printf("Enter the total marks: ");
    scanf("%d", &n);
    if (n>=90 && n<=100){
        printf("Grade: O");
    }
    else if (n>=80 && n<90){
        printf("Grade: E");
    }
    else if (n>=70 && n<80){
        printf("Grade: A");
    }
    else if (n>=60 && n<70){
        printf("Grade: B");
    }
    else if (n>=50 && n<60){
        printf("Grade: C");
    }
    else if (n>=40 && n<50){
        printf("Grade: E");
    }
    else{
        printf("Fail");
    }
}