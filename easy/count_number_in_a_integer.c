#include<stdio.h>

int main () {

    int num , count = 0;

    printf("Enter number to know how many digit integer it is.\n");
    printf("Enter number : ");
    scanf("%d",&num);

    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("it is %d integer \n",count);



    return 0;
}
