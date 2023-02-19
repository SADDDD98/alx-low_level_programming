#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
		printf("%d", m);

	printf("\n");

	return (0);
}
