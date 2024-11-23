#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
  int e, m, c;

  printf("\n\nEnter the value of m (mass) : ");
  scanf("%d", &m);

  printf("\nEnter The Value of c : ");
  scanf("%d", &c);

  e = m * c * c;
  printf("\n\nTotal Energy is : %d", e);

  return 0;
}
