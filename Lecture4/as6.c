#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main(void){
  
  /* 
  
  A boolean array that contains true/false values referring to 
  whether a certain pathway is open/close for transportation
  
  Only pathways 0 and 2 are open for transportation. The rest are closed.

  */
  bool pathway[8] = {true, false, true, false, false, false, false, false};

  for (int i = 0; i < NUM_PATHWAYS; i++){
    
    /* 
    
    Display the status of each pathway.

    Remember that pathway is type bool so its elements are either true/false - 1/0.

    */
    
    if (pathway[i]){
      printf("pathway[%d] is open \n", i);
    }else {
      printf("pathway[%d] is closed \n", i);
    }
  }

  return 0;
}

// a. Revise line 16 such that you use a designated initializer to set pathways 0 and 2 to true, and the rest will be false. Make the initializer as short as possible.

//Answer: 

/*

bool pathway[8] = {[0] = true, [2] = true};

*/


// b. Revise line 16 such that the initializer will be short as possible (without using a designated initializer)

//Answer: 

/*

bool pathway[8] = {true, false, true};
//The remaining elements in the array will be automatically initialized to false.

*/



//By: John Es' Ven Britanico