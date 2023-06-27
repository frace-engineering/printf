#include "main.h"
#include <stdarg.h>


/**
 * _printf - variadic function that prints formated output
 * @format: string of character format specifier
 *
 * Return: count of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int (*f)(va_list ptr);
	int n;


	va_start(ptr, format);
	n = 0;
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (; *format; format++)
	{
		if (*format != '%')
		{
			n += _putchar(*format);
			continue;
		}
		format++;
		f = check_type(*format);
		n += f ? f(ptr) : _printf("%%%c", *format);


	}
	va_end(ptr);
	return (n);
}


