/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:30:56 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/29 13:36:00 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s) + 1;
	new = malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	if (ft_strlcpy(new, s, len) >= len)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
