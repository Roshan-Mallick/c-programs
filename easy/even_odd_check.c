#include<stdio.h>

int main () {

    int a;
    printf("Enter num : ");
    scanf("%d",&a);
    if (a&1) printf ("odd\n"); //if a is odd number it will execute like every odd number have 1 in right most ending of binary conversion so 1&1 get's true and if executes
    else printf("even\n");


    return 0;
}
