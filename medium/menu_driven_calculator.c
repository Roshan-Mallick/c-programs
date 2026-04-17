#include<stdio.h>

int add (int a , int b){
    return a+b;
}

int sub (int a , int b){
    return a-b;
}

int mul (int a , int b){
    return a*b;
}

int dev (int a , int b){
    if (b == 0) {
            printf("Error: Division by zero\n");
            return 0;
        }
    return a/b;
}

int mod (int a , int b){
    if (b == 0) {
           printf("Error: Modulus by zero\n");
            return 0;
        }
    return a%b;
}



int main () {

    int a = 0 , b = 0;
    int hasInput = 0;

    int choice;

    while (1) {
        printf("\n0.Enter a and b\n1.addition\n2.substract\n3.multiply\n4.devide\n5.modulus\n6.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&choice);


        switch (choice) {
            case 0:   printf("Enter a : ");
                      scanf("%d",&a);
                      printf("Enter b : ");
                      scanf("%d",&b);
                      hasInput = 1;
            break;
            case 1: if (!hasInput) {
                printf("Enter values first!\n");
                break;
            }
            printf("Addition of %d + %d = %d\n",a,b,add(a,b));
            break;
            case 2:if (!hasInput) {
                printf("Enter values first!\n");
                break;
            }
            printf("Substract of %d - %d = %d\n",a,b,sub(a,b));
            break;
            case 3:
            if (!hasInput) {
                printf("Enter values first!\n");
                break;
            } printf("Multiply of %d x %d = %d\n",a,b,mul(a,b));
            break;
            case 4:
            if (!hasInput) {
                printf("Enter values first!\n");
                break;
            } printf("Division of %d / %d = %d\n",a,b,dev(a,b));
            break;
            case 5:
            if (!hasInput) {
                printf("Enter values first!\n");
                break;
            } printf("Modulus of %d %% %d = %d\n",a,b,mod(a,b));
            break;
            case 6: printf("Exited from calculator\n"); return 0;
            break;
            default: printf("invalid choice");
        }
    }

    return 0;
}
