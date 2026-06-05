#include<stdio.h>

int main () {

   int  n;

   printf("Enter number : ");
   scanf("%d",&n);

if (n==0) {
    printf("Digital root = 0\n");
} else {
   printf("Digital root = %d\n",1 + (n-1) % 9);
}

 return 0;
}
