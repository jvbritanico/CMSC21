//Includes the standard input and output library that contains input-output functions.
#include <stdio.h>

/* 
4. Write a code that computes for the power of two:

TABLE OF POWERS OF TWO
n           2 to the n
---     ---------------
0             1
1             2
2             4
3             8
4             16
5             32
6             64
7             128
8             256
9             512
10            1024 
*/


//Defines the main function of the program.
int main() 
{

    printf("TABLE OF POWERS OF TWO\n");
    printf("n\t2 to the n\n");
    printf("---\t---------------\n");
    
    //Declare a variable called "power" and initializes it to 1. This variable will be used to store the current power of 2.
    int power = 1;

    //This line starts a loop that will run 11 times, with "n" starting at 0 and increasing by 1 each time until it reaches 10. This loop will print the powers of 2 from 2^0 to 2^10.
    for (int n = 0; n <= 10; n++) {
        //This line prints the current value of "n" and "power" to the console. The "\t" creates a horizontal space between the two values, and "\n" creates a new line after the message.
        printf("%d\t%d\n", n, power);
        //This line doubles the value of "power", so that the next iteration of the loop will print the next power of 2.
        power *= 2;
    }


    //The program returns 0 to indicate successful execution.
    return 0;
}



//By: John Es' Ven Britanico