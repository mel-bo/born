#include "ft_printf.c"

int ft_nbr_len(long nbr)
{
  int count;

  count = 1;
  if (nbr < 0)
  {
    nbr = -nbr;
    count = 2;
  }
  while (nbr >= 10)
  {
    nbr /= 10;
    count++;
  }
  return (count);
}

int ft_putnbr(int n)
{
  long  nbr;
  int nbr_len;

  nbr = n;
  nbr_len = 0;
  nbr_len = ft_nbr_len(nbr);
  if (nbr < 0)
  {
    nbr = -nbr;
    ft_putchar('-');
  }
  if (nbr > 10)
    ft_putnbr(nbr / 10);
  ft_putchar(nbr % 10 + '0');
  return (nbr_len);
}
