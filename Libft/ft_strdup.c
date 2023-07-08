/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarrasc <icarrasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:45:01 by icarrasc          #+#    #+#             */
/*   Updated: 2023/01/08 11:35:44 by icarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ss1;
	size_t	i;

	ss1 = (char *)s1;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(ss1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (ss1[i] != '\0')
	{
		str[i] = ss1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
