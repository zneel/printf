/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:14:10 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/10 16:57:08 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(const char *fmt, ...);

# define B16_UPPER "0123456789ABCDEF"
# define B16_LOWER "0123456789abcdef"
# define B10 "0123456789"

typedef struct s_state
{
	int		flags;
	int		bytes;
	va_list	args;
	void	(*fn_ptr_table[9])(struct s_state *);
}			t_state;

size_t		ltoa_base(char *buffer, long n, char *base);
size_t		ultoa_base(char *buffer, unsigned long n, char *base, int extra);
size_t		uitoa_base(char *buffer, unsigned int n, char *base);
size_t		out(char *buffer, size_t len);
size_t		ul_nbr_len_base(unsigned long long nbr, int base_len);
size_t		l_nbr_len_base(long nbr, int base_len);
size_t		ft_strlen(const char *s);

#endif