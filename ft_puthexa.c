#include "ft_printf.h"

int ft_puthexa(unsigned long n, char format)
{
  char  *base;
  unsigned int  nbr;
  int count;
  unsigned int  len_base;

  if (format == 'X')
    base = "0123456789ABCDEF";
  else
    base = "0123456789abcdef";
  count = 0;
  nbr = (unsigned int)n;
  len_base = ft_strlen(base);
  if (nbr > (len_base - 1))
    count += ft_puthexa(nbr / len_base, format);
  count += ft_putchar(base[nbr % len_base]);
  return (count);
}
