#include "printf.h"

int ft_print(unsigned long nbr, const char *base)
{
  int count;

  count = 0;
  if (nbr > ft_strlen(base))
    count += ft_print(nbr / ft_strlen(base), base);
  count += ft_putchar(base[nbr % ft_strlen(base)]);
  return (count);
}
int ft_ptraddress(void *format)
{
  unsigned long n;
  const char  *base;
  int count;

  count = 0;
  n = (unsigned long)format;
  base = "0123456789abcdef";
  count = ft_putstr("0x");
  count += ft_print(n, base);
  return (count);
}
