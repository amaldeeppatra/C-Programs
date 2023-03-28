#include <stdio.h>

int main(){
    int cp, sp, pl;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the sell price: ");
    scanf("%d", &sp);
    if (sp>cp){
        pl = sp-cp;
        printf("Profit made of %d", pl);
    }
    else if (cp>sp){
        pl = cp-sp;
        printf("Loss made of %d", pl);
    }
    else{
        printf("No profit or loss");
    }
}