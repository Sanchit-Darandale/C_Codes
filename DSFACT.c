#include<stdio.h>																																																	    njn                             #include<stdio.h>
#include<conio.h>

int main()
{
    // Define the variable
    int i, fact=1,no;

    // Get the number from user to find factorial
    printf("\n\nEnter The Number: ");
    scanf("%d",&no);

    // Make a conditional statement for number is < 0
    if(no<0)
    {
      printf("Lol, Enter Positive Number !!");
    }
    else

    // Make a loop to get factorial of given number
    for(i=1;i<=no;i++)
    {
      fact=fact*i;
    }

    // Print the factorial of number
    printf("Factorial of %d is: %d", no, fact);

    // Get The Values by using getch();
    getch();

    // End the program
    return 0;
}
