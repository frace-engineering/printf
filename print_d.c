#include "main.h"


/**
 * print_d - prints integer / digits
 * @ptr: pointer to va_list
 * Return: number:
 */
int print_d(va_list ptr)
{
	unsigned int i;
	unsigned int j;

	i = va_arg(ptr, int);
	j = count_digits(i);

	print_num(i);
	return (j);
}
