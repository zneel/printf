/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:10:30 by ebouvier          #+#    #+#             */
/*   Updated: 2023/04/29 13:35:55 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base_fd(unsigned long long n, char *base, int fd)
{
	size_t	len;
	size_t	bytes;

	bytes = 0;
	len = ft_strlen(base);
	if (n < 0)
	{
		bytes += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > len - 1)
		bytes += ft_putnbr_base_fd(n / len, base, fd);
	bytes += ft_putchar_fd(base[n % len], fd);
	return (bytes);
}
