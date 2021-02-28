/*****************************************************
EX5:

Write C program to check whether a character is an alphabet or not

######### Console Output 1 ######
Enter a character: *
* is not an alphabet.
#############################

######### Console Output 2 ######
Enter a character: k
k is an alphabet.
#############################

 ******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>
#include <stdint.h>

/* Main program */
int main(void)
{
	/* Local variable used to save the user's input */
	uint8_t character;

	/* Print a statement that asked the user to enter a character */
	printf("Enter a character: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%c", &character);

	/* Check if the character is an alphabet or not */
	if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
	{
		/* If yes, print a statement shows that the character is an alphabet */
		printf("%c is an alphabet.", character);
	}
	else
	{
		/* If otherwise, print a statement shows that the character is not an alphabet */
		printf("%c is not an alphabet.", character);
	}

	/* Return from main function */
	return 0;
}