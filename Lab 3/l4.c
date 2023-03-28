#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c>=65 && c<=90){
        c += 32;
        printf("Character in lower case: %c", c);
    }
    else{
        printf("Character is in lower case.");
    }
}