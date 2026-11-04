#include<stdio.h>
#include<stdlib.h>


struct student {
    char name[50];
    int id;
    char sem[10];
    float cgpa;
    long int ph_Number;
};

int main (){


   struct student s1 ;

   printf("Enter name of the student : ");
   scanf("%49s",s1.name);

   printf("Enter id : ");
   scanf("%d",&s1.id);

   printf("Enter semester : ");
  scanf("%9s",s1.sem);

   printf("Enter cgpa : ");
   scanf("%f",&s1.cgpa);

   printf("Enter Phone number : ");
   scanf("%ld",&s1.ph_Number);


   printf("Student Information ---------------------------------------------------->\n");
   printf("Name : %s\n",s1.name);
   printf("Id   : %d\n",s1.id);
   printf("CGPA : %.2f\n",s1.cgpa);
   printf("Sem  : %s\n",s1.sem);
   printf("Ph   : %ld\n",s1.ph_Number);

    return 0;
}
