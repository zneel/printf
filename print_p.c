/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:26:43 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/11 18:31:04 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_p(t_state *state)
{
	void	*ptr;
	char	buffer[64];
	size_t	utoalen;

	ptr = va_arg(state->args, void *);
	if (!ptr)
		state->bytes += out("(nil)", 5);
	else
	{
		utoalen = ultoa_base(buffer, (unsigned long)ptr, B16_LOWER, 2);
		buffer[0] = '0';
		buffer[1] = 'x';
		state->bytes += out(buffer, utoalen);
	}
}
