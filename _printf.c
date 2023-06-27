#include "main.h"
#include <stdarg.h>


int _printf(const char *format, ...)
{
	va_list ptr;

	va_start(ptr, format);

	struct func specifier[] = {
		{'c', printchar},
		{'s', printstr},
		{'%', print_pcent}
	};
}


