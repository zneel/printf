/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:11:36 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/03 09:04:31 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static	size_t	trimmed_len(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;

	start = 0;
	len = ft_strlen(s1);
	while (s1[start] && in_set(s1[start], set))
		start++;
	if (start == len)
		return (0);
	while (s1[len - 1] && in_set(s1[len - 1], set))
		len--;
	return (len - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	len;
	size_t	trimmed;

	if (!s1 || !set)
		return (NULL);
	trimmed = trimmed_len(s1, set);
	len = trimmed + 1;
	new = ft_calloc(len, sizeof(char));
	if (!new)
		return (NULL);
	while (*s1 && in_set(*s1, set))
		s1++;
	ft_strlcpy(new, s1, trimmed + 1);
	return (new);
}
