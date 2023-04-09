//Includes the standard input and output library that contains input-output functions.
#include <stdio.h>


/* Write a program that displays a one-month calendar.
There should be a user prompt to set:
● The number of days
● The day of the week on which the month begins.
Additionally, add checkers to validate whether the days entered are valid. For instance,
the following number of days are invalid: 32, -1, 0, 27.
This addition will be a good refresher to our previous topic, selection statements.  */


//Defines the main function of the program.
int main() 
{
    //This line declares four integer variables
    int days, starting_day, i, j;

    // Get input from user
    printf("Enter the number of days in the month (28-31): ");
    scanf("%d", &days);

    //Checks if the value entered for days is less than 28 or greater than 31. If so, it prints an error message and exits the program with a status code of 1.
    if (days < 28 || days > 31) {
        printf("Invalid number of days.\n");
        return 1;
    }

    printf("Enter the starting day of the week (1=Sun, 2=Mon, ..., 7=Sat): ");
    scanf("%d", &starting_day);

    //Checks if the value entered is less than 1 or greater than 7. If so, it prints an error message and exits the program with a status code of 1.
    if (starting_day < 1 || starting_day > 7) {
        printf("Invalid starting day.\n");
        return 1;
    }

    // Print calendar header
    printf("\n---------------------------------");
    printf("\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    //This for loop prints out a number of blank spaces at the beginning of the calendar, depending on the starting day of the week. 
    //It does this by looping through a certain number of times (determined by the value of (starting_day + 6) % 7) and printing out five spaces for each iteration.
    for (i = 0; i < (starting_day + 6) % 7; i++) {
        printf("     ");
    }

    // Print days
    for (j = 1; j <= days; j++) {
        printf("%-4d ", j);

        // If this is the last day of the week, start a new line
        if ((j + starting_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

    // Print calendar footer
    printf("\n");
    printf("---------------------------------\n");


    //The program returns 0 to indicate successful execution.
    return 0;
}



//By: John Es' Ven Britanico