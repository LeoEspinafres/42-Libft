/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:16:45 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/23 13:16:11 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	c1;

	i = 0;
	c1 = c;
	while (s[i] != '\0')
	{
		if (s[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	if (c1 == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}
