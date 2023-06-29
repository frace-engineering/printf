#include "main.h"
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
	int n;
	char str[20];

	i = va_arg(ptr, int);
	j = count_digits(i);
	sprintf(str, "%d", i);
	if (str[0] == 0)
		str[0] = str[1];
	n = atoi(str);
	print_num(n);
	return (j);
}
