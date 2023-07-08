#include "ft_printf.h"

static int	ft_select_format(va_list args, char const str)
{
	char	*hex;
	int		len;

	len = 0;
	hex = "0123456789abcdef";
	if ((str == 'd') || (str == 'i'))
		len += ft_print_nbr(va_arg(args, int));
	if (str == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	if (str == 'c')
		len += ft_print_characters(va_arg(args, int));
	if (str == '%')
		len += ft_print_characters('%');
	if (str == 's')
		len += ft_print_strings(va_arg(args, char *));
	if (str == 'x')
		len += ft_print_hex(va_arg(args, unsigned long), hex);
	if (str == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (str == 'p')
	{
		len += ft_print_strings("0x");
		len += ft_print_hex(va_arg(args, unsigned long), hex);
	}
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	len = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_select_format(args, str[i]);
		}
		else
		{
			len += ft_print_characters(str[i]);
		}
		i++;
	}
	va_end (args);
	return (len);
}
