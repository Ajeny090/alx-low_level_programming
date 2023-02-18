#include <stdio.h>

/**
 * main - a program that prints single-digit numbers
 * Return:0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
for (j = i + 1; j <= 9; j++)
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
putchar('\n');
return (0);
}
