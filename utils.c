/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:09:09 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/09 14:23:36 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	nbr_len_base(unsigned long long nbr, int base_len)
{
	size_t	len;

	len = 0;
	while (nbr)
	{
		len++;
		nbr /= base_len;
	}
	return (len);
}
