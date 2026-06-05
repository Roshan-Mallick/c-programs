#include<stdio.h>

int main (){

   int num , reverse = 0 ;

   printf("Enter number : ");
   scanf("%d",&num);

   while (num != 0) {
       int digit = num % 10 ;
       reverse = reverse * 10 + digit;
       num = num / 10 ;
   }

printf("reverse number is %d \n",reverse);

    return 0;
}
