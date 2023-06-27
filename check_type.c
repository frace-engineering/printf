#include "main.h"



/**
 * check_type - return a function pointer for specific character
 * @c: character to be checked
 * @ptr: variable argument list
 * Return: NULL
 */
int (*check_type(char c))(va_list ptr)
{
	int i, n;

	check_t func[] = {
		{'c', printchar},
		{'s', printstr},
		{'%', print_pcent}
	};

	n = 3;
	i = 0;
	while (i < 3)
	{
		if (func[i].c == c)
		{
			return (func[i].f);
		}
		i++;
	}
	return (0);
}

