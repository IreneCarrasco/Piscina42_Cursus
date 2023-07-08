/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarrasc <icarrasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:03:50 by icarrasc          #+#    #+#             */
/*   Updated: 2023/01/08 17:51:39 by icarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;
	void	*ptr;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		if (!ptr)
			break ;
		elem = ft_lstnew(ptr);
		if (!elem)
			break ;
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	if (lst)
	{
		ft_lstclear(&new_lst, del);
		del(ptr);
		return (NULL);
	}
	return (new_lst);
}
