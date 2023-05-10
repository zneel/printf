/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:35:52 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/03 09:10:53 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int n)
{
	int	sz;

	sz = 0;
	if (n <= 0)
		sz++;
	while (n)
	{
		n /= 10;
		sz++;
	}
	return (sz);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		n_len;
	int		sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = nbr_len(n);
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	new = ft_calloc(n_len + 1, sizeof(char));
	if (!new)
		return (NULL);
	new[n_len] = 0;
	while (n_len)
	{
		new[--n_len] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		new[n_len] = '-';
	return (new);
}
