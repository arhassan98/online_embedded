/*****************************************************
EX6:

Write C program to calculate sum of natural numbers

######### Console Output ######
Enter an integer: 100
Sum = 5050
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

	/* Local variable used to save the sum of the natural numbers between zero and the desired number */
	int32_t sum;

	/* Print a statement that asked the user to enter an integer number */
	printf("Enter an integer: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%d", &num);

	/* From the Mathematical Induction Theory, we can conclude that the formula of getting the sum of
	   natural numbers between zero and any desired number is getting from: n*(n+1)/2,
	   which n is the desired number. */
	sum = num * (num + 1) / 2;

	/* Print a statement that shows the required sum */
	printf("Sum = %d", sum);

	/* Return from main function */
	return 0;
}