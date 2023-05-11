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
	size_t written;

	written = 0;
	written += write(1, buffer, len);
	write(1, "\0", 1);
	return (written);
}
