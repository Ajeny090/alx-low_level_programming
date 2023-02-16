#include <stdio.h>
/**
 * main - a program that prints the size of various types on computer
 * Return:0 (success)
 */
int main(void)
{
char c;
int i;
long int a;
long long int b;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
