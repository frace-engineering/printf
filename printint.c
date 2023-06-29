#include "main.h"
#include <stdio.h>


/**
 * print_int - prints numbers
 * @num: input number/digits
 *
 * Return: void
 */
int print_int(int num)
{
	int last_digit;
	int decimal;
	int base;

	decimal = 0;
	base = 1;
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	while (num != 0)
	{
		last_digit = num % 10;
		decimal += last_digit * base;
		base *= 8;
		num /= 10;
	}
	print_num(decimal);
	return (0);
}
