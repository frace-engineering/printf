#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
/**
 * struct check - structure with two members
 * @c: first member
 * @f: function pointer
 */
typedef struct check
{
	char c;
	int (*f)(va_list ptr);
} check_t;

int _printf(const char *format, ...);
int (*check_type(char c))(va_list ptr);
int _putchar(char c);
int _puts(char *s);
int printchar(va_list ptr);
int printstr(va_list ptr);
int print_pcent(va_list ptr);
int count_digits(int num);
void print_num(int num);
int print_i(va_list ptr);
int print_d(va_list ptr);

#endif /* MAIN_H */
