/* In array do the following: 1. Find given element in array 2. Find Max and Min element
3. Find frequency of given element in array 4. Find Average of elements in Array.*/
#include <stdio.h>
#include<conio.h>

int main()
{
    int size, i, element, choice;
    int max, min;
    int arr[100];
    int sum = 0, count = 0;
    float average;
    char ch;
    clrscr();

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: \n", size);
    for (i = 0; i < size; i++) {
	scanf("%d", &arr[i]);
    }
    do
    {
    printf("Choose an operation:\n");
    printf("1. Find given element in array\n");
    printf("2. Find Max and Min element\n");
    printf("3. Find frequency of given element in array\n");
    printf("4. Find Average of elements in Array\n");
    scanf("%d", &choice);

    switch (choice)
    {
	case 1:
	    printf("Enter element to find: ");
	    scanf("%d", &element);
	    for (i = 0; i < size; i++)
	    {
		if (arr[i] == element)
		{
		    printf("Element %d found at index %d\n", element, i);
		    break;
		}
	    }
	    if (i == size)
	    {
		printf("Element %d not found in the array\n", element);
	    }
	    break;

	case 2:
	    max = arr[0];
	    min = arr[0];
	    for (i = 1; i < size; i++)
	    {
		if (arr[i] > max)
		{
		    max = arr[i];
		}
		if (arr[i] < min)
		{
		    min = arr[i];
		}
	    }
	    printf("Maximum element: %d\n", max);
	    printf("Minimum element: %d\n", min);
	    break;

	case 3:
	    printf("Enter element to find frequency: ");
	    scanf("%d", &element);
	    for (i = 0; i < size; i++)
	    {
		if (arr[i] == element)
		{
		    count++;
		}
	    }
	    printf("Frequency of element %d: %d\n", element, count);
	    break;

	case 4:
	    for (i = 0; i < size; i++)
	    {
		sum += arr[i];
	    }
	    average = (float)sum / size;
	    printf("Average of elements: %.2f\n", average);
	    break;

	default:
	    printf("Invalid choice\n");
    }
printf("Do you want to continue? (Y||N) \n ");
scanf("%s",&ch);
}while(ch=='Y'||ch=='y');
getch();
}
