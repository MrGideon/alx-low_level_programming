#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
int i,sum = 0;
for( i = 0; i < argc; i++)
{
if( isdigit(argv[i]))
{


sum+=atoi(argv[i]);
printf("%d\n", sum);
return (0);

}
else if (argc <= 2 )
{
printf("0\n");
}
printf("Error\n");
return (1);

}
return (2);
}
