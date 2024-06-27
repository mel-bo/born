#include "ft_printf.h"

int ft_format(va_list args, char format)
{
  void *ptr;

  if (format == 'c')
    return (ft_putchar((va_arg(args, int))));
  else if (format == 's')
    return (ft_putstr((va_arg(args, char *))));
  else if (format == 'd' || format == 'i')
    return (ft_putnbr((va_arg(args, int))));
  else if (format == 'X' || format == 'x')
    return (ft_puthexa((va_arg(args, unsigned int), format)));
  else if (format == 'p')
  {
    ptr = va_arg(args, void *);
    if (ptr)
      return (ft_ptraddress(ptr));
    return (ft_putstr("0x0"));
  }
  else if (format == 'u')
    return (ft_putunsigned((va_arg(args, unsigned int))));
  else if (format == '%')
    return (ft_putchar('%'));
  else
    return (-1);
  }
}

int ft_printf(const char *format, ...)
{
  va_list args;
  int     i;
  int     count;

  i = 0;
  count = 0;
  va_start (args, format);
  while (format[i])
  {
    if (format[i] != '%' || format[i])
      count += ft_putchar(format[i]);
    else if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
    {
      count += ft_format(args, format[i + 1]);
      i++;
    }
    i++;
  }
  va_end(args);
  return (count);
}
