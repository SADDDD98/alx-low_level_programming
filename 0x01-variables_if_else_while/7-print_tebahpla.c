#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - Print the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
