#include <stdio.h>
#include <string.h>

// Define structure EMPLOYEE
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    char dateOfJoining[11];  // Format: YYYY-MM-DD
    double salary;
};

// Function to update employee details
void updateEmployee(struct EMPLOYEE *emp, const char *name, const char *designation, char gender, const char *dateOfJoining, double salary) {
    strcpy(emp->name, name);
    strcpy(emp->designation, designation);
    emp->gender = gender;
    strcpy(emp->dateOfJoining, dateOfJoining);
    emp->salary = salary;
}

// Function to print employee details
void printEmployee(struct EMPLOYEE emp) {
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Gender: %c\n", emp.gender);
    printf("Date of Joining: %s\n", emp.dateOfJoining);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    // Create an employee instance
    struct EMPLOYEE emp;
    
    char name[50], designation[50], dateOfJoining[11];
    char gender;
    double salary;

    // Accept employee details from the user
    printf("Enter employee name: ");
    gets(name);
    
    printf("Enter employee designation: ");
    gets(designation);

    printf("Enter employee gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter date of joining (YYYY-MM-DD): ");
    scanf("%s", dateOfJoining);

    printf("Enter employee salary: ");
    scanf("%lf", &salary);

    // Update employee details
    updateEmployee(&emp, name, designation, gender, dateOfJoining, salary);
    
    // Print updated employee details
    printf("\nEmployee Details:\n");
    printEmployee(emp);

    return 0;
}
