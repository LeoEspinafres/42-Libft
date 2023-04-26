/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:18:11 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/15 15:05:15 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	c1;

	s = (unsigned char *)str;
	c1 = c;
	i = 0;
	while (i < n)
	{
		if (s[i] == c1)
			return (s + i);
		i++;
	}
	return (NULL);
}
