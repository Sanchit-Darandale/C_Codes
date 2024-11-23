#include <stdio.h>
#include <math.h>

int main()
{
float basic, total, hra, da;

printf("\n\nEnter The Basic Salary Of Employee: ");
scanf("%f", &basic);

hra = 0.2*basic;
printf("\nhra of employee is : %.2f", hra);

da = 1.5* basic;
printf("\nThe da of employee is : %.2f", da);

total = hra + da + basic;
printf("\nTotal Salary Of Employee is: %.2f", total);

return 0;
}