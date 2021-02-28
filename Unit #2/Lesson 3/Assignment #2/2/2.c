/*****************************************************
EX1:

Write C program to check vowel or consonant

######### Console Output 1 ######
Enter an alphabet: i
i is vowel.
#############################

######### Console Output 2 ######
Enter an alphabet: G
G is consonant.
#############################

******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>
#include <stdint.h>

/* Main program */
int main(void)
{
	/* Local variable used to save the user's input */
	int8_t character;

	/* Print a statement that asked the user to enter an alphabet */
	printf("Enter an alphabet: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%c", &character);

	/* Check if the alphabet is vowel or not */
	if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
	   character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
	{
		/* If yes, print a statement shows that the number is vowel */
		printf("%c is vowel.", character);
	}
	else
	{
		/* If otherwise, print a statement shows that the number is consonant */
		printf("%c is consonant.", character);
	}

	/* Return from main function */
	return 0;
}