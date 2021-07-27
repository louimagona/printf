#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints just like printf
 * @format: character to specify printing format
 * Return: number of parameters passed
 */

int _printf(const char *format, ...)
{
	const char *iter;
	char *s;
	unsigned int i;
	va_list ap;

	va_start(ap, format);

	for (iter = format; *iter != '\0'; iter++)
	{
		while (*iter != '%')
		{
			putchar(*iter);
			iter++;
		}
		iter++;

		switch (*iter)
		{
			case 'c':
				i = va_arg(ap, int);
				putchar(i);
				break;
			case 's':
				s = va_arg(ap, char*);
				puts(s);
				break;
		}
		va_end(ap);
	}
	return (i);
}
