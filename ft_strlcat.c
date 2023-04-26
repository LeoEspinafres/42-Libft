/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:27:11 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/15 13:37:14 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	p;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	p = dst_len;
	if (size <= dst_len || size == 0)
		return (size + src_len);
	while (src[i] && i < (size - dst_len - 1))
	{
		dst[p] = src[i];
		p++;
		i++;
	}
	dst[p] = '\0';
	return (dst_len + src_len);
}
