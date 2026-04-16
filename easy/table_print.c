#include<stdio.h>

int main (){

    int num , table_upto , result ;

    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d", &num);

    printf("Enter the range for the multiplication table: ");
    scanf("%d",&table_upto);

    for (int i = 1 ; i <=table_upto ; i++){

          result = num * i;
          printf("%d x %d = %d \n", num , i, result);

    }

    return 0;
}
