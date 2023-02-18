#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l;
	char d;
	for (l = 'a'; l <= 'z'; l++)
		putchar(l '\n');

	for (d = 'A'; d <= 'Z'; d++)
		putchar(d '\n');

	putchar('\n');
	return (0);
}
