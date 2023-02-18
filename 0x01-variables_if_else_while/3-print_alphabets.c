#include  <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase and uppercase
 * Return:0 (success)
 */
int main(void)
{
char bh;
for (bh = 'a'; bh <= 'z'; bh++)
putchar(bh);
for (bh = 'A'; bh <= 'Z'; bh++)
putchar(bh);
putchar('\n');
return (0);
}
