#include "main.h"

/**
 * print_last_digit - check the code
 * @r: Entry value
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	if (r < 0)
	{
		r = (-1 * (r % 10));
		_putchar(r + '0');
		return (r);
	}


	else
	{
		r = (r % 10);
		_putchar(r + '0');
		return (r);
	}
}
