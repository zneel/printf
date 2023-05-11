/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:24:35 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/11 18:29:50 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_d(t_state *state)
{
	int		d;
	char	buffer[64];
	size_t	itoalen;

	d = va_arg(state->args, int);
	itoalen = ltoa_base(buffer, d, B10);
	state->bytes += out(buffer, itoalen);
}

void	print_i(t_state *state)
{
	int		i;
	char	buffer[64];
	size_t	itoalen;

	i = va_arg(state->args, int);
	itoalen = ltoa_base(buffer, i, B10);
	state->bytes += out(buffer, itoalen);
}
