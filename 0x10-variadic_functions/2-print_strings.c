#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *c;

	if (n > 0)
	{
		va_start(vl, n);
		for (i = 1; i <= n; i++)
		{
			c = va_arg(vl, char *);
			if (c == NULL)
				printf("(nil)");
			else
				printf("%s", c);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(vl);
	}
	printf("\n");
}
