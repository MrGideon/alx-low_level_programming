#include "main.h"
#include <stdio.h>
/**
*main - check the code.
*@n: pointer of the direcction at the variable n
*Return: 0 (success)
*/
int main(void)
{
int n;

n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}
