/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:17:21 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/02 14:39:00 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	word;

	word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			word++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (word);
}

static void	*free_mem(char **new, int i)
{
	while (i--)
	{
		if (new[i])
			free(new[i]);
	}
	free(new);
	return (NULL);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int	split(char **new, char const *s, char c)
{
	int	i;
	int	w_len;

	i = 0;
	w_len = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
		{
			w_len = word_len(s, c);
			new[i] = ft_calloc(w_len + 1, sizeof(char));
			if (!new[i])
			{
				free_mem(new, i);
				return (0);
			}
			ft_strlcpy(new[i], s, w_len + 1);
			s += w_len;
			i++;
		}
	}
	new[i] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	new = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!new)
		return (NULL);
	if (!split(new, s, c))
		return (NULL);
	return (new);
}
