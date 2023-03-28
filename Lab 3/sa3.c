#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c<=65 && c>=90){
        if (c==65 || c==69 || c==73 || c==79 || c==85){
            printf("%c is a vowel", c);
        }
        else{
            printf("%c is a consonant", c);
        }
    }
    else if (c<=97 && c>=122){
        if (c=="A" || c=="E" || c=="I" || c=="O" || c=="U"){
            printf("%c is a vowel", c);
        }
        else{
            printf("%c is a consonant", c);
        }
    }
    else{
        printf("You have not entered a character!");
    }
}