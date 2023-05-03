/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:43:38 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/03 15:54:43 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_char(char c)
{
	ft_putchar_fd(1, c);
}

void	parse_flags(const char *fmt, )
{
	while (*fmt)
	{
		if (*fmt == 'c')
			print_char();
		else if (*fmt == 's')
			ft_putstr

		s++;
	}
}

void	parse_percent(const char *fmt)
{
	while (*fmt)
	{
		if (*fmt == '%')
			parse_flags(fmt);
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	if (*fmt)
		parse_percent(fmt);
	va_end(args);
}
