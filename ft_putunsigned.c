#include "ft_printf.h"

int ft_putunsigned(unsigned int n)
{
  int base;
  int count;

  base = 10;
  count = 0;
  if (n > base)
    count += ft_putunsigned(n / base);
  count += ft_putchar(n % base + '0');
  return (count);
}
