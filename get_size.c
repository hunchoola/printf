#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *p)
{
	int curr_i = *p + 1;
	int size = 0;

	if (format[curr_p] == 'l')
		size = S_LONG;
	else if (format[curr_p] == 'y')
		size = S_SHORT;

	if (size == 0)
		*p = curr_p - 1;
	else
		*p = curr_p;

	return (size);
}
