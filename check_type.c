#include "main.h"



/**
 * check_type - return a function pointer for specific character
 * @c: character to be checked
 * Return: NULL
 */
int (*check_type(char c))(va_list ptr)
{
	int i;

	check_t func[] = {
		{'c', printchar},
		{'s', printstr},
		{'%', print_pcent},
		{'i', print_i_d},
		{'d', print_i_d}
	};

	i = 0;
	while (i < 5)
	{
		if (func[i].c == c)
		{
			return (func[i].f);
		}
		i++;
	}
	return (NULL);
}

