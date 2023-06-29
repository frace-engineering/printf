#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_i - prints integer / digits
 * @ptr: pointer to va_list
 * Return: number:
 */
int print_i(va_list ptr)
{
	int i;
	int j;

	i = va_arg(ptr, int);
	j = count_digits(i);
	print_int(i);
	return (j);
}
