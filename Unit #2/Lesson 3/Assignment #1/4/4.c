/*****************************************************
EX4:

Write C Program to Multiply two Floating Point Numbers
I should see the Console as following:
##########Console-output###
Enter two numbers: 2.4
1.1
Product: 2.640000
###########################

******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>

/* Main program */
int main(void)
{
	/* Two local variables used to save the user's inputs */
	float floatNum1, floatNum2;

	/* Local variable used to save the multiply of the two numbers */
	double mulResult;

	/* Print a statement that asked the user to enter two numbers */
	printf("Enter two numbers: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variables */
	scanf("%f", &floatNum1);
	scanf("%f", &floatNum2);

	/* Do the multiply operation and saves the result in the desired variable */
	mulResult = floatNum1 * floatNum2;

	/* Print the result of the multiply operation */
	printf("Product: %f", mulResult);

	/* Return from main function */
	return 0;
}