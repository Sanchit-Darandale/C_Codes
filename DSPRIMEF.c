#include <stdio.h>
#include <conio.h>

int main()
{
    //declaring the variable
    int no, l=2;

    //get number from user
    printf("\n\nEnter a Number: ");
    scanf("%d", &no);

    //print the values of prime factor
    printf("\nPrime Factor Of %d is: \n", no);

    //make loop to find prime factorial
    while(no>1)
    {
	if(no%l==0)
	{
	  printf("%d, \t", l);
	  no = no/l;
	}
	else
	{
	l++;
	}
    }

    //get the values
    getch();

    //return 0 to compiler / end of program
    return 0;
}
