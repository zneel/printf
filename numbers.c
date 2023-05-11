/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:10:30 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/10 18:17:13 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/**
 * @brief Transform the unsigned long n to a string in the buffer
 * 
 * @param buffer 
 * @param n 
 * @param base 
 * @return size_t 
 */
size_t	ltoa_base(char *buffer, long n, char *base)
{
	size_t	len;
	size_t	copied;
	size_t	base_len;
	int		sign;

	base_len = ft_strlen(base);
	len = l_nbr_len_base(n, base_len);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	copied = len;
	while (len)
	{
		buffer[--len] = base[n % base_len];
		n /= base_len;
	}
	if (sign)
		buffer[len] = '-';
	return (copied);
}

/**
 * @brief Transform the unsigned long n to a string in the buffer
 * 
 * @param buffer 
 * @param n 
 * @param base 
 * @return size_t 
 */
size_t	ultoa_base(char *buffer, unsigned long n, char *base, int extra)
{
	size_t	len;
	size_t	copied;
	size_t	base_len;

	base_len = ft_strlen(base);
	len = ul_nbr_len_base(n, base_len) + extra;
	copied = len;
	while (len)
	{
		buffer[--len] = base[n % base_len];
		n /= base_len;
	}
	return (copied);
}

/**
 * @brief Transform the unsigned long n to a string in the buffer
 * 
 * @param buffer 
 * @param n 
 * @param base 
 * @return size_t 
 */
size_t	uitoa_base(char *buffer, unsigned int n, char *base)
{
	size_t	len;
	size_t	copied;
	size_t	base_len;

	base_len = ft_strlen(base);
	len = l_nbr_len_base(n, base_len);
	copied = len;
	while (len)
	{
		buffer[--len]= base[n % base_len];
		n /= base_len;
	}
	return (copied);
}
