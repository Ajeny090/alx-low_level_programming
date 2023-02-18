#include <stdio.h>

/**
 * main - a program that prints single-digit numbers
 * Return:0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
for (j = i; j <= 9; j++)
putchar(i + '0'\n);
putchar(j + '0'\n);
if (i < 9 || j < 9)
putchar(','\n);
putchar(' '\n);
return (0);
}
