#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c>=97 && c<=122){
        c -= 32;
        printf("Character in upper case: %c", c);
    }
    else{
        printf("Character is in upper case.");
    }
}