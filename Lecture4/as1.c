#include <stdio.h>

//1. What is the output of the following program?

/* This code displays powers of two from 1 to 128. The variable i is first initialized to 1, and after that, a while loop is started, which will continue to run as long as i is less than or equal to 128. 
The current value of i is first printed using printf within the loop, and then it is multiplied by 2 to form the following power of 2. Until i exceeds 128, this process is repeated. */

int main(void)
{
  int i;

  i = 1;
  while (i <= 128) {
    printf("%d ", i);
    i *= 2;
  }


  return 0;
}

/* This happens because it prints 1 first, then multiplies i by 2 to obtain 2, prints that, then multiplies i by 2 again to get 4, and so on until it prints 128, which is the last power of 2 that is less than or equal to 128. */

//Output: 1 2 4 8 16 32 64 128

//By: John Es' Ven Britanico