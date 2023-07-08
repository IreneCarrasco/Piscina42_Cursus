#include "ft_printf.h"

int	ft_print_hex(unsigned long p, char *hex)
{
	int		len;

	len = 0;
	if (p == 0)
		return (ft_print_characters('0'));
	if (p > 15)
	{
		len += ft_print_hex(p / 16, hex);
		len += ft_print_hex(p % 16, hex);
	}
	else
		len += ft_print_characters(hex[p % 16]);
	return (len);
}
