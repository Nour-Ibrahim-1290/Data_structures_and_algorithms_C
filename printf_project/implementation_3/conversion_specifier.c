#include <stdarg.h>
#include <stdio.h>


int my_printf(const char* format, ...)
{
    va_list args;
    int count;

    va_start(args, format);

    count = vfprintf(stdout, format, args);

    va_end(args);

    return (count);



}