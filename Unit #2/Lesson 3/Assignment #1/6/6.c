/*****************************************************
EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################

******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>

/* Main program */
int main(void)
{
	/* Two local variables used to save the user's inputs */
	float a, b;

	/* Print a statement that asked the user to enter the value of "a" */
	printf("Enter value of a: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%f", &a);

	/* Print a statement that asked the user to enter the value of "b" */
	printf("Enter value of b: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%f", &b);

	/* Swap function */
	a = a + b;
	b = a - b;
	a = a - b;

	/* Print the value of two numbers after swapping */
	printf("After swapping, value of a = %f\n"
		   "After swapping, value of b = %f", a, b);

	/* Return from main function */
	return 0;
}