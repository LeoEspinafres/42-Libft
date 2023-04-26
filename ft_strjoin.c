/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:13:59 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/22 14:16:51 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*together;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	together = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!together)
		return (NULL);
	while (*s1 != '\0')
	{
		together[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		together[i] = *s2;
		i++;
		s2++;
	}
	together[i] = '\0';
	return (together);
}
