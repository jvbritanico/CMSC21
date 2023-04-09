#include <stdio.h>

//3. Convert item 1 into an equivalent for statement. You can validate your answer by checking if the produced outputs by both the while and for statements are similar.

int main(void)
{
    int i;

    for (i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }


    return 0;
}

/* While using a different syntax, the for loop contains the same loop condition and loop body as the while loop. The loop starts with a value of 1 for the variable i,
then iterates until i is less than or equal to 128 by multiplying i by 2 each time. The program prints a series of powers of 2 in the same order as the while loop. */

//Output: 1 2 4 8 16 32 64 128

//By: John Es' Ven Britanico