#ifdef LIBFT_H
# define LIBFT_H

#include <unistd.h>

int   ft_ptraddress(void *format);
int   ft_puthexa(unsigned long n, char format);
int   ft_putstr(char const *s);
int   ft_strlen(const char *s);
int   ft_putchar(char c);
int   ft_putnbr(int n);
int   ft_putunsigned(unsigned int n);
char  *ft_strrchr(const char *s, int c);
#endif
