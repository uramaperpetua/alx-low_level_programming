#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
	for (num2 = num1 + 1; num2 <= 9; num2++)
	{
	for (num3 = num2 + 1; num3 <= 9; num3++)
	{
		putchar('0' + num1);
		putchar('0' + num2);
		putchar('0' + num3);

		if (num1 < 7)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
