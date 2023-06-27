#include "main.h"
#include <stdarg.h>


int _printf(const char *format, ...)
{
	va_list ptr;
	int (*f)(va_list ptr);
	int n;

	va_start(ptr, format);
	n = 0;
	while (*format)
	{
		if (format != '%')
		{
			n += _putchar(*format);
			continue;
		}
		format++;
		f = check_type(*format);
	}
	return (n);
}


