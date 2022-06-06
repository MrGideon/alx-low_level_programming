#include <stdio.h>

/**
 * main - Entryp Point of the program
 *
 * Return: The Progrem returns 1 (stderr)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", str);
	return (1);
}
