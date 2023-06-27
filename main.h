#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _puts(char *s);

struct func {
	char c;
	int (*f)(va_list ptr)
};

void printchar(va_list ptr);
void printstr(va_list ptr);
void print_pcent(va_list ptr);
#endif /* MAIN_H */
