#include "main.h"



void printchar(va_list ptr)
{
	char c;
	_putchar(va_arg(ptr, int));
}
