#include "main.h"
##include <stddef.h>
#include <stdarg.h>

int _printf(const char * const format, ...)
{
    va_list args;
    int i = 0; j = 0; int num = 0;
    int n_printed = 0;
    char *str = NULL;
    int (*func)(va_list);

    va_start(args, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
          func = _select_func(format[i+1]);
          if (func != NULL)
          {
            n_displayed += func(args);
            // n_printed++;
            i++;
          }
      }
      else
      {
          _putchar(format[i]);
          n_printed++;
      }

        i++;
    }

    va_end(args);

    return (n_printed);

}
