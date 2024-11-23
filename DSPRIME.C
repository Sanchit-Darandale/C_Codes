#include<stdio.h>
#include<conio.h>

int main()
{
    //Declare the variable
    int l, no, ds=0;

    //Get Number From User
    printf("\n\nEnter The Number: ");
    scanf("%d", &no);

    // make a loop to find number is prime or not
    for(l=1; l<=no; l++)
    {
    if(no%l==0)
      {
	ds++;
      }
    }

    // Condition to determine whether number is prime or not
    if(ds==2)
      {
      printf("\n%d is Prime Number", no);
      }
    else
      {
      printf("\n%d is not Prime Number", no);
      }

    // get the values
    getch();

    //End the program
    return 0;
}
