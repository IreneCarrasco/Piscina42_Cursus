#include "ft_printf.h"

int	ft_print_nbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		ft_print_strings("-2147483648");
        return(11);
	}
	else if (nb < 0)
	{
		len += ft_print_characters('-');
		len += ft_print_nbr(-nb);
	}
	else if (nb > 9)
	{
		len += ft_print_nbr(nb / 10);
		len += ft_print_nbr(nb % 10);
	}
	else
		len += ft_print_characters(nb + 48);
	return (len);
}