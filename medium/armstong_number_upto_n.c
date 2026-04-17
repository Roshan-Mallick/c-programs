#include<stdio.h>

int main () {

    int num ;

    printf("Enter a number : ");
    scanf("%d",&num);

   for  (int i = 1 ; i <= num; i++){

       int temp = i , digit , sum = 0;

       while (temp != 0) {
           digit = temp % 10;
           sum = sum + digit * digit * digit ;
               temp = temp/ 10;
       }

            if(sum == i) printf("%d\n",i);
   }

    return 0;
}
