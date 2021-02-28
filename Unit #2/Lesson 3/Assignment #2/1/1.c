/*****************************************************
EX1:

Write C program to check whether a number is even or odd

######### Console Output 1 ######
Enter an integer you want to check: 25
25 is odd.
#############################

######### Console Output 2 ######
Enter an integer you want to check: 12
12 is even.
#############################

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
	printf("Enter an integer you want to check: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input in the desired variable */
	scanf("%d", &intNum);

	/* Check if the number is divisible by 2 or not */
	if(intNum % 2 == 0)
	{
		/* If yes, print a statement shows that the number is even */
		printf("%d is even.", intNum);
	}
	else
	{
		/* If otherwise, print a statement shows that the number is odd */
		printf("%d is odd.", intNum);
	}

	/* Return from main function */
	return 0;
}