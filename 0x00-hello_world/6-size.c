#include <stdio.h>
/**
 * main - A program that print the size of various computer type
 * Return: 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
 printf ("size of char: %lu Byte(s)\n", (unsigned long)sizeof(a));
 Printf ("size of int: %lu Byte(s)\n", (unsigned long)sizeof(b));
 Printf ("size of long int: %lu Byte(s)\n", (unsigned long)sizeof(c));
 Printf ("size of long long int: %lu Byte(s)\n", (unsigned long)sizeof(d));
 Printf ("size of float: %lu Byte(s)\n", (unsigned long)sizeof(f));
 return (0);
}
