//Standard Input and Output that contains functions for input and output operations.
#include <stdio.h>

//Defines the main function of the program. With void as argument that takes no arguments.
int main(void)
{
  //These lines declare two variables: i as int type and x as float type.
  int i;
  float x;

  //Assigned variables with given values.
  i = 40;
  x = 839.21f;

  //The value of i is printed in decimal notation by the first format specifier %d. A minimum of five characters are added to the value of i in the second format specifier %5d, which also prints the value in decimal notation. The third format specifier %-5d aligns the value to the left of the field and prints the value of i in decimal notation, with spaces to make it at least five characters wide. The fourth format specifier %5.3d, prints the value of i in decimal notation, only prints the three least significant digits of the number and pads the value with zeros to make it at least five characters wide. Then added by \n - new line.
  printf("|%d|%5d|%-5d|l%5.3d|\n", i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

  //Terminates the code.
  return 0;
}


//By: John Es' Ven Britanico