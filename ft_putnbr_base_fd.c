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

void	ft_putnbr_base_fd(int n, char *base, int fd)
{
	ssize_t	l;
	int		len;

	l = n;
	len = ft_strlen(base);
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	if (l > len - 1)
		ft_putnbr_base_fd(l / len, base, fd);
	ft_putchar_fd(base[l % len] + 48, fd);
}
