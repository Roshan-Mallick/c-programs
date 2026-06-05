#include<stdio.h>


int fib_iteraton( int n ){

int a = 0 , b = 1 , c ;

  for (int i = 0 ; i < n ; i++){
      printf("%d\n", a);
      c = a + b;
      a = b ;
      b = c;
  }
 return a;
}

int main () {


   int n  ;
   printf("Enter n : ");
   scanf("%d",&n);

   fib_iteraton(n);

    return 0;
}
