#include "main.h"


/**
 * print_num - prints numbers
 * @num: input number/digits
 *
 * Return: void
 */
void print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if (num / 10 != 0)
	{
		print_num(num / 10);
	}
	_putchar((num % 10) + '0');

}
