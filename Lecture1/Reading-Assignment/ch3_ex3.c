/* Code: Adds two fractions */

//Standard Input and Output that contains functions for input and output operations.
#include <stdio.h>

//Defines the main function of the program. With void as argument that takes no arguments
int main(void)
{
  //This line declares six integer type variables
  //They will be used to store the numerator and denominator of the two fractions and the numerator and denominator of the result.
  int num1, denom1, num2, denom2, result_num, result_denom;

  //These lines show a message requesting the user to enter the first fraction and then read two integers from the input separated by a slash /. The first integer is stored in num1, while the second is stored in denom1.
  printf("Enter first fraction: ");
  scanf ("%d/%d", &num1, &denom1);

  //Same goes with the first printf and scanf, except this is the second part: fraction.
  printf("Enter second fraction: ");
  scanf("%d/%d", &num2, &denom2);

  //The first numerator (num1) is multiplied by the second denominator (denom2) on this line to get the numerator, which is then added to the product of the second numerator (num2) and the first denominator (denom1).
  result_num = num1 * denom2 + num2 * denom1;

  //This part calculates the denominator of the result by multiplying the two denominators.
  result_denom = denom1 * denom2;

  //This displays the sum of the two fractions that the user inputted as a fraction by printing the values.
  printf("The sum is %d/%d\n", result_num, result_denom);


  //Terminates the code.
  return 0;
}

//By: John Es' Ven Britanico