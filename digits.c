#include "main.h"
#include <stdio.h>


/**
 * count_digits - counts number os digits in a a given number
 * @num: input number
 *
 * Return: count
 */
int count_digits(int num)
{
	unsigned int count;

	if (num < 0)
	{
		num = num * -1;
	}
	count = 1;
	while (num / 10 != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
