#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_print_nbr(nb / 10);
		count += ft_print_nbr(nb % 10);
	}
	else
		count += ft_print_characters(nb + 48);
	return (count);
}
