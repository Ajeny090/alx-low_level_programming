#include <stdio.h>

/**
 * main - a program that prints all single digit numbers
 * Return:0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
putchar('\n');
return (0);
}
