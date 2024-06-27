#include "ft_printf.h"

int ft_putstr(char const *s)
{
  int i;
  if (!s)
    return (write(1, "(null)", 6));
  return (write(1, s, ft_strlen(s)));
}
