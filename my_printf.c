#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - my implementation of the printf function
 * @format: character that specifies the format
 */

int _printf(const char *format,...)
{
    char *s;
    char *t;
    int i;
    va_list ap;

    va_start(ap, format);
    for (t = format; *t != '\0'; t++)
    {
        while (*t != '%')
        {
            putchar(*t);
            t++;
        }
        t++;
        
        switch(*t)
        {
            case 'c': 
            i = va_arg(ap, int);
            putchar(i);
            break;
            case 's':
            s = va_arg(ap, char *);
            puts(s);
            break;
        }
        va_end(ap);
    }
}
