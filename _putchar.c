#include "main.h"
#include <unistd.h>


/**
 * _putchar - prints a character
 * @c: input character
 *
 * Return: count of cgaracter
 */
int _putchar(char c)
{
	int r;

	r = write(1, &c, 1);
	return (r);
}
