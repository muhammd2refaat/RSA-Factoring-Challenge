#include "factor.h"

/**
 * main - Entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{ /* Main function begins */
	FILE *fptr; /* File pointer for file operations */
	size_t count; /* Count of characters read */
	ssize_t line; /* Line read status */
	char *buffer = NULL; /* Buffer to store each line of the file */


	if (argc != 2)
	{ /* Check if correct number of command line arguments are provided */
		fprintf(stderr, "Usage: factor <filename>\n"); /* Print usage message */
		exit(EXIT_FAILURE); /* Exit program with failure status */
	}
	fptr = fopen(argv[1], "r"); /* Open the file in read mode */
	if (fptr == NULL)
	{ /* Check if file opening was successful */
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE); /* Exit program with failure status */
	}
	while ((line = getline(&buffer, &count, fptr)) != -1)
	{ /* Read lines from the file until EOF */
		factorize(buffer); /* Call function to factorize each line */
	}
return (0); /* Return 0 indicating successful execution */
}
