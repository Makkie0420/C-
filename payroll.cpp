#include <stdio.h>
 int main () {

     int a, b, sum, id;
      char surname, firstname, middlename[100];

     printf("Payroll\n");

     printf("Enter Employee no. ");
     scanf("%d", &id);

     printf("Surname: ");
     scanf("%s", &surname);

     printf("Firstname: ");
     scanf("%s", &firstname);

     printf("Middlename: \n");
     scanf("%s", &middlename);

     printf("Tax: ");
     scanf("%d", &a);

     printf("SSS: ");
     scanf("%d", &b);

     sum = a + b;

     printf("Total: %d", sum);

     return 0; 
 }
