// John Es' Ven Britanico
// 2022-02630
// CMSC21 Lec11 assignment

// Include the necessary header files for standard input/output operations
#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h> /* bool */

/* This code defines a function scan_word that takes a pointer to an integer array as a parameter (int *occurrences).
>Inside the function, it reads characters from input until a newline character is encountered.
>For each character, it checks if it is an alphabetic character using 'isalpha'.
>If it is an alphabetic character, it converts it to uppercase using toupper and subtracts the ASCII value of 'A' to determine the array index.
>Then, it increments the value at the corresponding index in the occurrences array, which keeps track of how many times each letter occurs in the word. */
void scan_word(int *occurrences) {
	char c;
	while ((c = getchar()) != '\n') {
		if (isalpha(c)) {
			occurrences[toupper(c) - 'A']++;
		}
	}
}

/* This code defines a function is_anagram that takes two pointers to integer arrays as parameters (int *occurrences1 and int *occurrences2).
>Inside the function, it iterates over the indices from 0 to 25 (representing the 26 letters of the alphabet).
>It compares the values at each index of occurrences1 and occurrences2.
>If any of the values are not equal, it means the occurrences of a letter differ between the two words, and it returns false.
>If all the values are equal, it means the words are anagrams, and it returns true. */
bool is_anagram(int *occurrences1, int *occurrences2) {
	for (int i = 0; i < 26; i++) {
		if (occurrences1[i] != occurrences2[i]) {
			return false;
		}
	}
	return true;
}

/* The main function is where the program starts its execution.
>It declares two integer arrays occurrences1 and occurrences2, initialized with zeros to store the occurrences of each letter in the respective words.
>It prompts the user to enter the first word and calls the scan_word function, passing the occurrences1 array as an argument.
>It prompts the user to enter the second word and calls the scan_word function again, passing the occurrences2 array as an argument.
>It calls the is_anagram function, passing the occurrences1 and occurrences2 arrays as arguments, and assigns the result to the anagram variable.
>Then, it prints the appropriate message based on the value of anagram to indicate whether the words are anagrams or not. */
int main(void) {
	int occurrences1[26] = {0};
	int occurrences2[26] = {0};

	printf("Enter first word: ");
	scan_word(occurrences1);

	printf("Enter second word: ");
	scan_word(occurrences2);

	bool anagram = is_anagram(occurrences1, occurrences2);

	if (anagram) {
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}



	return 0;
}