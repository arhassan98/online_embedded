/*****************************************************
EX8:

Write C program to make a simple calculator to add, subtract, multiply
or divide using switch...case

######### Console Output ######
Enter operator either + or - or * or /: -
Enter two operands: 3.4
8.4
3.4 - 8.4 = -5.0
#############################

******************************************************/

/* Includes library that used in this project  */
#include <stdio.h>
#include <stdint.h>

/* Main program */
int main(void)
{
	/* Local variable used to save the operator type */
	uint8_t operator;

	/* Local variable used to save the user's input numbers */
	float num1, num2;

	/* Local variable used to save the operation result */
	double result;

	/* Local variable used to know if the second number equal to zero or not. Default is False */
	uint8_t num2EqualZero = 0;

	/* Print a statement that asked the user to enter an integer number */
	printf("Enter operator either + or - or * or /: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input operator in the desired variable */
	scanf("%c", &operator);

	/* Print a statement that asked the user to enter two numbers */
	printf("Enter two operands: ");

	/* Clear the output buffer and move the buffered data to console */
	fflush(stdin);
	fflush(stdout);

	/* Save the user's input numbers in the desired variables */
	scanf("%f", &num1);
	scanf("%f", &num2);

	/* Switch over the operator types */
	switch(operator)
	{
		/* In case of '+' operator */
		case '+':
			/* Save the result in the desired variable */
			result = num1 + num2;
			break;

		/* In case of '-' operator */
		case '-':
			/* Save the result in the desired variable */
			result = num1 - num2;
			break;

		/* In case of '*' operator */
		case '*':
			/* Save the result in the desired variable */
			result = num1 * num2;
			break;

		/* In case of '/' operator */
		case '/':
			/* Check if the second number equal to zero or not */
			if(num2 == 0)
			{
				/* If yes, make the variable true */
				num2EqualZero = 1;
			}
			else
			{
				/* If no, save the result in the desired variable */
				result = num1 / num2;
			}
			break;
	}

	/* Check if the second number is not equal to zero or not */
	if(!num2EqualZero)
	{
		/* If yes, print a statement shows that the required result */
		printf("%f %c %f = %f", num1, operator,num2, result);
	}
	else
	{
		/* If no, print a statement shows that the result of dividing by zero */
		printf("Error! Divide by 0 is not possible.");
	}

	/* Return from main function */
	return 0;
}