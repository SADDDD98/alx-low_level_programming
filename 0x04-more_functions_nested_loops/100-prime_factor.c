#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long i, maxj;
	long number = 612852475143;
	double s = sqrt(number);

	for (i = 1; i <= s; i++)
	{
		if (number % i == 0)
		{
			maxj = number / i;
		}
	}

	printf("%ld\n", maxj);

	return (0);
}
