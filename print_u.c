/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:24:24 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/11 18:30:40 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_u(t_state *state)
{
	unsigned int	u;
	char			buffer[64];
	size_t			uitoalen;

	u = va_arg(state->args, unsigned int);
	uitoalen = uitoa_base(buffer, u, B10);
	state->bytes += out(buffer, uitoalen);
}
