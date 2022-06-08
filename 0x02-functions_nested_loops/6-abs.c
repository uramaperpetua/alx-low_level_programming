#include "main.h"
#include <stdio.h>

/**
 * _abs -check the code
 * @r: Entry value
 * Return: Always 0.
 *
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else if (r <= 0)
	{
		return (-r);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
