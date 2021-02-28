/*****************************************************
EX7:

Write C program to find the factorial of a number

######### Console Output 1 ######
Enter an integer: -5
Error!!! Factorial of negative number doesn't exist.
#############################

######### Console Output 2 ######
Enter an integer: 10
Factorial = 3628800
#############################


 ******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>
#include <stdint.h>

/* Main program */
int main(void)
{
	/* Local variable used to save the user's input */
	int32_t num;

	/* Local variable used to save the factorial of the entered number */
	int64_t factResult = 1;

	/* Print a statement that asked the user to enter an integer number */
	printf("Enter an integer: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%d", &num);

	/* Check if user entered a positive number or not */
	if(num > 0)
	{
		/* If yes, Looping until the num equal to zero */
		while(num)
		{
			/* Save the result in the desired variable */
			factResult *= num;

			/* Decrease the number to achieve the factorial theory */
			num--;
		}

		/* Print a statement that shows the result factorial */
		printf("Factorial = %d", factResult);
	}

	/* Check if user entered a negative number or not */
	else if(num < 0)
	{
		/* If yes, print a statement that shows the result of entering a negative number */
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else
	{
		/* If otherwise, print a statement that shows the result factorial or zero */
		printf("Factorial = %d", factResult);
	}

	/* Return from main function */
	return 0;
}