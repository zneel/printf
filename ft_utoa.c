/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:04:41 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/09 17:53:53 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Transform the unsigned long n to a string in the buffer
 * 
 * @param buffer 
 * @param n 
 * @param base 
 * @return size_t 
 */
size_t	ft_utoa(char *buffer, unsigned long n, char *base)
{
	size_t	len;
	size_t	copied;
	size_t	base_len;
	char	tmp[8];

	base_len = ft_strlen(base);
	len = nbr_len_base(n, base_len);
	copied = len;
	while (len)
	{
		tmp[len--] = base[n % base_len];
		n /= base_len;
	}
	while (len < copied)
		*buffer++ = tmp[len++];
	return (copied);
}
