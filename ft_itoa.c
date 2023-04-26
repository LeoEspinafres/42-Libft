/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:54:48 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/16 17:30:50 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ascii_converter(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	ft_length(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter++;
	while (n != 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		length;

	length = ft_length(n);
	buffer = malloc(sizeof(char) * (length + 1));
	if (!buffer)
		return (NULL);
	buffer[length] = '\0';
	if (n < 0)
		buffer[0] = '-';
	else if (n == 0)
		buffer[0] = '0';
	while (n != 0)
	{
		buffer[--length] = ft_ascii_converter(n % 10) + '0';
		n /= 10;
	}
	return (buffer);
}
