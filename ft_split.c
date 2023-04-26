/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:27:23 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/24 19:43:58 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(const char *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (word_count);
}

static char	*ft_write_word(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **new_string,
		int words)
{
	int	i;
	int	word_num;
	int	word_len;

	i = 0;
	word_num = 0;
	word_len = 0;
	while (word_num < words)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			word_len++;
			i++;
		}
		new_string[word_num] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!new_string)
			return (NULL);
		ft_write_word(new_string[word_num], s, i, word_len);
		word_len = '\0';
		word_num++;
	}
	new_string[word_num] = 0;
	return (new_string);
}

char	**ft_split(char const *s, char c)
{
	char			**new_string;
	unsigned int	words;

	if (!s)
		return (NULL);
	words = ft_word_counter(s, c);
	new_string = (char **)malloc(sizeof(char *) * (words + 1));
	if (!new_string)
		return (NULL);
	ft_split_words(s, c, new_string, words);
	return (new_string);
}
