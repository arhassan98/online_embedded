/*****************************************************
EX3:

Write C Program to Add Two Integers

I should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################

******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>
#include <stdint.h>

/* Main program */
int main(void)
{
	/* Two local variables used to save the user's inputs */
	int32_t intNum1;
	int32_t intNum2;

	/* Print a statement that asked the user to enter two integer numbers */
	printf("Enter two integers: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%d", &intNum1);
	scanf("%d", &intNum2);

	/* Print the sum of the user's input */
	printf("Sum: %d", intNum1+intNum2);

	/* Return from main function */
	return 0;
}