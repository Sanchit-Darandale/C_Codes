#include <stdio.h>
#include <conio.h>

void main()
{
int n1, n2, nt, n, i, d;

n1 =0;
n2 =1;

printf("Enter Value Of N: ");
scanf("%d", &n);

printf("First Two Digit Of Fibonacii Series Is: %d, %d", n1, n2);

for (i>2 ;i<=n; i++)
{
nt = n1+n2;
printf("%d", nt);

n1 = n2;
n2 = nt;
}
getch();
}