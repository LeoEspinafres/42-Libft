/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:02:11 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/15 13:17:27 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dest;
	if (!a && !b)
		return (NULL);
	else if (b > a)
	{
		while (n-- > 0)
			b[n] = a[n];
	}
	else
		ft_memcpy(b, a, n);
	return (dest);
}
