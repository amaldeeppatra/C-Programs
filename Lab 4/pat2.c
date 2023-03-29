#include <stdio.h>

int main(){
   int i, n, s;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i=1; i<=n; i++){
      int j=1;
      for (j; j<=(n-i); j++){
         printf(" ");
      }
      for (s=1; s<=i; s++){
         printf("* ");
      }
      printf("\n");
   }
}