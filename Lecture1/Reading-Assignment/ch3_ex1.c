//Standard Input and Output that contains functions for input and output operations.
#include <stdio.h>

//Defines the main function of the program. With void as argument that takes no arguments.
int main (void)
{
  //These lines of the code declare four variables: 
  //Whichare i and j as int type, and x and y as float type.
  int i, j;
  float x, y;

  //These lines assign values to the given variables.
  i = 10; 
  j = 20;
  x = 43.2892f;
  y = 5527.0f;

  //This line used the printf function from the library to print the variables' values to the console as a formatted string. Then specified by the format "%d" and "%f" which are used to indicate it is integer and float variables' values to be written. The \n at the end is a newline character that adds a new line.
  printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

  //Terminates the code.
  return 0;
}

//By: John Es' Ven Britanico