/*****************************************************
EX4:

Write C program to check whether a number is positive or negative

######### Console Output 1 ######
Enter a number: 12.3
12.3 is positive.
#############################

######### Console Output 2 ######
Enter a number: 0
You entered zero.
#############################

 ******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>

/* Main program */
int main(void)
{
	/* Local variable used to save the user's input */
	float num;

	/* Print a statement that asked the user to enter a number */
	printf("Enter a number: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%f", &num);

	/* Check if the number is greater than zero or not */
	if(num > 0)
	{
		/* If yes, print a statement shows that the number is positive */
		printf("%f is positive.", num);
	}

	/* If no, check if the number is less than zero or not */
	else if(num < 0)
	{
		/* If yes, print a statement shows that the number is positive */
		printf("%f is negative.", num);
	}
	else
	{
		/* If otherwise, print a statement shows that the user has entered zero */
		printf("You entered zero.", num);
	}

	/* Return from main function */
	return 0;
}