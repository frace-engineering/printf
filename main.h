#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _puts(char *s);
nt _printf(const char *format, ...);
typedef struct check {
	char c;
	int (*f)(va_list ptr)
} check_t;

void printchar(va_list ptr);
void printstr(va_list ptr);
void print_pcent(va_list ptr);
#endif /* MAIN_H */
