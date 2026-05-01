#include<stdio.h>
#include<string.h>


void reverse (char *str){
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end ){
        char temp = *start ;
        *start = *end ;
        *end = temp ;
        start++;
        end--;
    }
}

int main () {

    char str[100];
    printf("Enter string : ");
    fgets(str , sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    reverse(str);
    printf("Reversed : %s\n",str);

    return 0;
}
