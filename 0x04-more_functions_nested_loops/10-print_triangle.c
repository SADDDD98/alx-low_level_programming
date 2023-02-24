#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @s: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int s)
{
	int i, j, k;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			for (j = s - i; j > 1; j--)
			{
				_putchar(32);
			}

			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
