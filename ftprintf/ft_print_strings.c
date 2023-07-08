#include "ft_printf.h"

int	ft_print_strings(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_print_strings("(null)"));
	while (str[i] != '\0')
	{
		ft_print_characters(str[i]);
		i++;
	}
	return (i);
}
