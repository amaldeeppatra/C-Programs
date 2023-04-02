// Prints the total fare according to the dist covered
#include<stdio.h>

int main(){
    int a,b,c,d,e,dist,t=0;
    printf("Basic charge is 50\n");
    printf("Enter the distance covered: ");
    scanf("%d", &dist);
    if (dist>=1&&dist<=10){
        printf("Total fare is 150");
    }
    else if (dist>=11&&dist<=15){
        t = 50+100+((dist-10)*10);
        printf("Total fare is %d", t);
    }
    else if (dist>=16&&dist<=20){
        t = 50+100+50+((dist-15)*5);
        printf("Total fare is %d", t);
    }
    else if (dist>=21&&dist<=25){
        t = 50+100+50+25+((dist-20)*4);
        printf("Total fare is %d", t);
    }
    else{
        t = 50+100+50+25+20+((dist-25)*3);
        printf("Total fare is %d", t);
    }
}