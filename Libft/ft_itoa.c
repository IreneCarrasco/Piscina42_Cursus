/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarrasc <icarrasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:01:10 by icarrasc          #+#    #+#             */
/*   Updated: 2023/01/07 16:12:04 by icarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long x)
{
	size_t	c;

	c = 0;
	if (x == 0)
	{
		c++;
		return (c);
	}
	if (x < 0)
	{
		x = x * -1;
		c++;
	}
	while (x > 0)
	{
		x = x / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nl;

	nl = n;
	len = ft_intlen (nl);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nl < 0)
	{
		str[0] = '-';
		nl = nl * -1;
	}
	while (nl > 0)
	{
		str[len] = (nl % 10) + '0';
		nl = nl / 10;
		len --;
	}
	return (str);
}
