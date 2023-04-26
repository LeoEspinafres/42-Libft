/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:42:17 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/15 15:33:39 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*res;
	unsigned char	c1;

	i = 0;
	res = NULL;
	c1 = c;
	while (s[i] != '\0')
	{
		if (s[i] == c1)
			res = (char *)s;
		s++;
	}
	if (c1 == 0)
		res = (char *)s;
	return (res);
}
