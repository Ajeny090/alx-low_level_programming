#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * Return:0 (success)
 */
int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++)
putchar(lc);
putchar('\n');
return (0);
}
