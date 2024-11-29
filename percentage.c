#include <stdio.h>

int main() 
{
    int marks[5];
    int i, total = 0;
    float aggregate;
    char grade;

    printf("Enter marks for five subjects: \n");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &marks[i]);
        total =total+marks[i];
    }

    aggregate = (float)total / 5;

    switch ((int) aggregate / 10) 
    {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = 'A'; // Distinction
            break;
        case 6:
            grade = 'B'; // First Division
            break;
        case 5:
            grade = 'C'; // Second Division
            break;
        case 4:
            grade = 'D'; // Third Division
            break;
        default:
            grade = 'F'; // Fail
            break;
    }

    for (i = 0; i < 5; i++) {
        if (marks[i] < 40) {
            grade = 'F'; // Fail if any subject is below 40
            break;
        }
    }

    if (grade == 'F') {
        printf("Result: Fail\n");
    } else {
        printf("Result: Pass with %c Grade and an aggregate of %.2f%%\n", grade, aggregate);
    }

    return 0;
}
