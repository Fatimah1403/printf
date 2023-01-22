#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
