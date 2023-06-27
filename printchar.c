#include "main.h"


/**
 * printchar - prints character
 * @ptr: pointer to va_list
 * Return: 1
 */
int printchar(va_list ptr)
{
	char c;
	int i;

	c = va_arg(ptr, int);

	i = _putchar(c);
	return (i);
}
