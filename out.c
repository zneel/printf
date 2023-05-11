/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:28:32 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/10 18:09:45 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	out(t_state *state, char *buffer, size_t len)
{
	int	width;
	size_t written;

	width = len;
	written = 0;
	if (!(state->flags & F_LEFT))
		while (width++ < state->width)
			written += write(1, " ", 1);
	written += write(1, buffer, len);
	if (state->flags & F_LEFT)
		while (width++ < state->width)
			written += write(1, " ", 1);
	return (written);
}
