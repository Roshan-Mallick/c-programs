#include<stdio.h>

int main () {

     int num , rev = 0 , digit ;

    printf("Enter num : ");
    scanf("%d",&num);

      int original = num ;

    while (num != 0) {

        digit = num % 10;
        rev = rev * 10 + digit ;
        num = num / 10 ;

    }

    if (rev == original ) printf ("plaindrome\n");
    else printf("it is not a plaindorme \n");
    return 0;
}
