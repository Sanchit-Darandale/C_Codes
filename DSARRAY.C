#include <stdio.h>
#include <conio.h>

int main()
{
   int size, i, element, choice;
   int max, min;
   int sum=0, count = 0;
   int arr[100];
   float average;
   char ch;

   printf("\nEnter The Number Of Element in array: \n");
   scanf("%d", &size);

   printf("\nEnter %d Elements: \n", size);

   for (i=0; i<size; i++)
   {
     scanf("%d", &arr[i]);
   }

   do
   {
     printf("\nChoose an operation: \n");
     printf("1. Find given number in array: \n");
     printf("2. Find Max & Min in element: \n");
     printf("3. Find Frequency of given element in array: \n");
     printf("4. Find Average of element in arrey: \n");
     scanf("%d", &choice);

       switch (choice)
       {
	  case 1:
	     printf("\nEnter Element to find: \n");
	     scanf("%d", &element);
	     for (i=0 ; i<size ; i++)
	     {
		  if (arr[i]==element)
		  {
		     printf("\nElement %d found at index %d \n", element, i);
		     break;
		  }
	     }
	     if (i == size)
	     {
		  printf("\nElement %d Not Found in Array\n", element);
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
	      printf("\nMaximum Element: %d\n", max);
	      printf("Minimum Element: %d\n", min);
	      break;

	  case 3:
	      printf("\nEnter Element To Find Frequency: ");
	      scanf("%d", &element);
	      for (i = 0; i< size; i++)
	      {
		  if (arr[i] == element)
		  {
		      count++;
		  }
	      }
	      printf("\nFrequency Of Element %d is: %d", element, count);
	      break;

	  case 4:
	      for (i=0; i<size; i++)
	      {
		  sum += arr[i];
	      }
	      average = (float)sum / size;
	      printf("\nAverage Of element is: %.2f\n", average);
	      break;

	  default:
	      printf("\nInvalid Choice !\n");
       }
   printf("\nDo you want to continue? (Y||N) \n");
   scanf("%s", &ch);
   }
   while (ch=="Y" || ch=="y");
   getch();
   return 0;
}
