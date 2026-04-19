#include<stdio.h>

int main () {

    int p , i , j;

    printf ("Enter P : ");
    scanf("%d",&p);

    for (i = 1 ; i <= p ; i++){

         for (j = 0 ; j < i; j++){
             printf("*");
         }
         printf("\n");
    }



    return 0;
}
