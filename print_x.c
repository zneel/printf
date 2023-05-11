/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:24:31 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/11 18:30:43 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_x(t_state *state)
{
	unsigned int	x;
	char			buffer[64];
	size_t			itoalen;

	x = va_arg(state->args, unsigned int);
	itoalen = ultoa_base(buffer, x, B16_LOWER, 0);
	state->bytes += out(buffer, itoalen);
}

void	print_big_x(t_state *state)
{
	unsigned int	big_x;
	char			buffer[64];
	size_t			itoalen;

	big_x = va_arg(state->args, unsigned int);
	itoalen = ultoa_base(buffer, big_x, B16_UPPER, 0);
	state->bytes += out(buffer, itoalen);
}
