/*****************************************************
EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################

******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>
#include <stdint.h>

/* Main program */
int main(void)
{
	/* A local variable used to save the user's input */
	int8_t character;

	/* Print a statement that asked the user to enter a character */
	printf("Enter a character: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%c", &character);

	/* Print the ASCII of the user's input */
	printf("ASCII value of %c = %d", character, character);

	/* Return from main function */
	return 0;
}