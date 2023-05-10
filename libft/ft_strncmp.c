/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:31:18 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/28 13:57:14 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*s1cpy;
	const unsigned char	*s2cpy;
	unsigned char		c1;
	unsigned char		c2;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	c1 = *s1cpy;
	c2 = *s2cpy;
	if (n == 0)
		return (0);
	while (n-- && c1 == c2)
	{
		if (!c1)
			return (c1 - c2);
		c1 = *s1cpy++;
		c2 = *s2cpy++;
	}
	return (c1 - c2);
}
