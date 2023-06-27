#include "main.h"


/**
 * _puts - prints a string to stdout
 * @s: pointer to string
 *
 * Return: number of characters printed
 */
int _puts(char *s)
{
	int n;

	n = 0;
	while (*s)
	{
		n += _putchar(*s);
		s++;
	}
	return (n);
}
