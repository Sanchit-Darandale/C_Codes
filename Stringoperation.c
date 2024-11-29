#include<stdio.h>
#include<string.h>
void main()
{
char m[10],n[10];
int i;
printf("enter the string1");
scanf("%s",m);
printf("enter the string2");
scanf("%s",n);
i=strcmp(m,n);

printf("\nthe string is %s",m);
printf("\nthe string is %s",n);
printf("\nthe string length is %d",strlen(m));
printf("\nthe string length is %d",strlen(n));
if(i<=0)
    {
    printf("\nthe string is unequal");
    }
else
    { 
    printf("\nthe string is equal");
    }

}