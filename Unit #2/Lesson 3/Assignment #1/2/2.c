/*****************************************************
EX2:

Write C Program to Print a Integer Entered by a User
I should see the Console as following:
##########Console-output###
Enter an integer: 25
You entered: 25
###########################

******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>
#include <stdint.h>

/* Main program */
int main(void)
{
	/* Local variable used to save the user's input */
	int32_t intNum;

	/* Print a statement that asked the user to enter an integer number */
	printf("Enter an integer: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%d", &intNum);

	/* Print the user's input */
	printf("You entered: %d", intNum);

	/* Return from main function */
	return 0;
}