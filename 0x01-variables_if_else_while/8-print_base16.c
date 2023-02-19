#include <stdlib.h>
#include <stdio.h>
/*
 * main - Entry point
 * 
 * Description: 'prints all numbers of base 16.'
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	char l;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
