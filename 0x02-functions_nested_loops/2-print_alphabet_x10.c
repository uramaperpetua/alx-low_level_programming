#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char al = 'a';

	while (al <= 'j')
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		al++;
	}
}
