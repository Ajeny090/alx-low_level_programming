#include <stdio.h>

/* * main - a program that prints single-digit numbers
 * Return:0 (success)
 */
int main(void)
{
	int i;
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		 if (i < 9)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
