#include "main.h"
#include <unistd.h>


/**
 * _putchar - prints a character
 * @c: input character
 *
 * Return: I
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
