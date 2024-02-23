#include <stdio.h>
/* This program finds the prime factors of a given number */
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{ /* Main function begins */
	long long int num = 239809320265259; /* The number to find prime factors for*/
	long int factor1 = 2; /* First factor initialized to 2 */
	long int factor2; /* Second factor yet to be determined */
	/* Start of while loop to find factors */
	while (num % factor1)
	{ /* While loop begins */
		if (factor1 <= num)
		{ /* If condition to check if factor1 is less than or equal to num */
			factor1++; /* Increment factor1 if condition is met */
		}
		else
		{ /* Else statement if factor1 exceeds num */
			return (-1); /* Return -1 indicating failure */
		}
	} /* End of while loop */

	factor2 = num / factor1; /* Calculate second factor */
	printf("%lld = %ld * %ld\n", num, factor2, factor1);
	return (0); /* Return 0 indicating success */
} /* End of main function */
