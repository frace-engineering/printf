#include "main.h"


/**
 * print_pcent - prints % if followed by unknown format secifier
 * @ptr: pointer to va_list
 * Return: void
 */
int print_pcent(va_list ptr)
{
	int i;


	(void)ptr;
	i = _putchar('%');

	return (i);
}
