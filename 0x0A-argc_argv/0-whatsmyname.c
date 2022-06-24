#include<stdio.h>
/**
 * main - prints first argement 
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success
 */

int main  (int argc char*argv[] ){

	int i=0;
	for (i=0; i<argc; i++){
	printf(argv[i]);
	printf("\n");
	}
	return(0);
}
