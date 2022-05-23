#include "main.h"
#include <stdarg.h>

int _print_char(va_list args)
{
    char c = va_list(args, int);

    return (_putchar(c));
}

