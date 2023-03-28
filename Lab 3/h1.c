#include <stdio.h>

int main(){
    char a;
    printf("Enter something: ");
    scanf("%c", &a);
    if ((a>='A' && a<='Z')||(a>='a' && a<='z')){
        printf("It is a letter");
    }
    else if (a>=48 && a<=57){
        printf("It is a digit");
    }
    else{
        printf("It is a special character");
    }
}