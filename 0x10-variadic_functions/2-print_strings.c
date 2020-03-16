#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings and new line using variadic function
 * @separator: separator between numbers printed
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	char *tempstr;
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(arguments, n);
	i = 0;
	while (i < (int) n)
	{
		tempstr = va_arg(arguments, char*);
		if (tempstr != NULL)
			printf("%s", tempstr);
		else
			printf("(nil)");
		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arguments);
}
