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

	l = 'a';
	d = 'A';
	while
	       	(l <= 'z') {
			putchar(l);
			l++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}

	putchar('\n');
	return (0);
}
