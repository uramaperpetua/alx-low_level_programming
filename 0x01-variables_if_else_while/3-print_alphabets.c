#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char A;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	for (A = 65; A < 91; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
