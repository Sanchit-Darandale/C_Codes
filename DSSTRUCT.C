#include <stdio.h>
#include <conio.h>
#include <string.h>

//define structure EMPLOYEE
struct EMPLOYEE
   {
    char name[50];
    char designation[50];
    char gender;
    char dateofjoining[11];  // format: YYYY-MM-DD
    double salary;
   };

// function to update employee details
void updateEmployee(struct EMPLOYEE *emp, const char *name,
const char *designation, char gender, const char *dateofjoining, double salary)
   {
    strcpy(emp->name, name);
    strcpy(emp-> designation, designation);
    emp->gender = gender;
    strcpy(emp->dateofjoining, dateofjoining);
    emp->salary = salary;
   }
// function to print employee details
void printEmployee(struct EMPLOYEE emp)
   {
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Gender: %c \n", emp.gender);
    printf("Date Of Joining: %s\n", emp.dateofjoining);
    printf("Salary: %.2f\n", emp.salary);
   }

int main()
  // create an employee instance
  {
   struct EMPLOYEE emp;
   char name[50], designation[50], dateofjoining[11];
   char gender;
   double salary;

   //Accept Employee Datails From User
   printf("\n\nEnter Employee name: ");
   gets(name);

   printf("Enter Employee Designation: ");
   gets(designation);

   printf("Enter Employee Gender (M/F): ");
   scanf("%c", &gender);

   printf("Enter Date Of Joining (YYYY-MM-DD): ");
   scanf("%s", dateofjoining);

   printf("Enter Employee Salary: ");
   scanf("%lf", &salary);

   //Update Employee Details
   updateEmployee(&emp, name, designation, gender, dateofjoining, salary);

   //print updated employee details
   printf("Employee Details: \n\n");
   printEmployee(emp);

   getch();

   return 0;
  }

