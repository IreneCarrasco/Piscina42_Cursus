#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_print_characters(int c);
int	ft_print_strings(char *str);
int	ft_print_nbr(int nb);
int	ft_print_hex(unsigned long p, char *hex);
int	ft_print_unsigned(unsigned int n);
#endif
