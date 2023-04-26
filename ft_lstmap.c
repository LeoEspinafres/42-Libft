/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 07:50:10 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/24 19:25:39 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*result;

	if (!lst)
		return (0);
	new_list = 0;
	while (lst != NULL)
	{
		result = ft_lstnew(f(lst->content));
		if (result == NULL)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, result);
		lst = lst->next;
	}
	return (new_list);
}
