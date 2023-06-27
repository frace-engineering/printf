#include "main.h"



/**
 * printstr - prints string of characters
 * @ptr: pointer to va_list
 *
 * Return: count of characters printed
 */
int printstr(va_list ptr)
{
	int i;
	char *s;

	s = va_arg(ptr, char *);

	if (s != NULL)
		i = _puts(s);
	else
		i = _puts("(null)");
	
	return (i);
}
