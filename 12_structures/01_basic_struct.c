#include<stdio.h>
#include<string.h>


struct student {
    char name[50] ;
    long int id;
};

int main () {


    struct student s1;

    strcpy(s1.name , "Roshan");
    s1.id = 251001001177;

    printf("Name of the student : %s\n",s1.name);
    printf("Id of the student : %ld\n",s1.id);


    return 0;
}
