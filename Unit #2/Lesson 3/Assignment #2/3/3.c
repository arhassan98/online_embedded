/*****************************************************
EX3:

Write C program to find the largest number among three numbers

######### Console Output ######
Enter three numbers: 12.2
13.452
10.193
Largest number = 13.452
#############################

 ******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>

/* Main program */
int main(void)
{
	/* Local variable used to save the user's input */
	float num1, num2, num3;

	/* Local variable used to save largest number */
	float maxNum;

	/* Print a statement that asked the user to enter three numbers */
	printf("Enter three numbers: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's inputs in the desired variables */
	scanf("%f", &num1);
	scanf("%f", &num2);
	scanf("%f", &num3);

	/* Check if number 1 is greater than number 2 and number 3 or not */
	if(num1 > num2 && num1 > num3)
	{
		/* If yes, assign the value of number 1 to the maxNum variable */
		maxNum = num1;
	}

	/* Check if number 2 is greater than number 1 and number 3 or not */
	else if(num2 > num1 && num2 > num3)
	{
		/* If yes, assign the value of number 2 to the maxNum variable */
		maxNum = num2;
	}
	else
	{
		/* If otherwise, assign the value of number 3 to the maxNum variable */
		maxNum = num3;
	}

	/* Print the largest number */
	printf("Largest number = %f", maxNum);

	/* Return from main function */
	return 0;
}