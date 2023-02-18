#include <stdio.h>

/**
 * main - a program that prints single-digit numbers
 * Return:0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
j = i + '0';
putchar(j);
if (i != 9)
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
