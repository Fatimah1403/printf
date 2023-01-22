#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
	va_list list;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	length = print_format(format, args);
	va_end(list);
	return (length);
}
