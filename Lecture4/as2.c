#include <stdio.h>


//2. Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?


int main(void)
{
  /* Assuming that the loop bodies are the same, we generate the following code block: */

  int i;



  printf("\na) while loop:\n");
  i = 1;
  while (i < 10)
  {
    printf("%d ", i);
    i++;
  }

  printf("\n");



  printf("\nb) for loop:\n");
  i = 1;
  for (; i < 10;)
  {
    printf("%d ", i);
    i++;
  }

  printf("\n");



  printf("\nc) do-while loop:\n");
  i = 1;
  do
  {
    printf("%d ", i);
    i++;
  } while (i < 10);
  
  printf("\n");



  return 0;
}

/*
Output: 
a) while loop:    
1 2 3 4 5 6 7 8 9 

b) for loop:      
1 2 3 4 5 6 7 8 9 

c) do-while loop: 
1 2 3 4 5 6 7 8 9
*/

/* When the first and third expressions are both omitted, the resulting loop
is nothing more than a while statement in disguise. */

//Answer: c

/* The do-while loop in statement (c) ensures that the loop body will run at least once even if the loop condition is false from the start, which is the key difference. While the for loop in statement (b) and the while loop in statement (a) will both never execute the body of the loop if the loop condition is false from the start.

Since the do-while loop in statement (c) behaves differently than the other two statements, assuming that the loop bodies are the same, statement (c) is not equivalent to the other two statements. */


//By: John Es' Ven Britanico