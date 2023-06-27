#include "main.h"



void printstr(va_list ptr)
{
	char *s;
	_puts(va_arg(ptr, char *));
}
