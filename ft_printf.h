/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:14:10 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/08 17:40:53 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int			ft_printf(const char *fmt, ...);

# define FLAG_HASH 0x1 // # 1U << 0U = 1
# define FLAG_ZERO 0x2 // 0 1U << 1U = 2
# define FLAG_LEFT 0x4 // - 1U << 2U = 4
# define FLAG_PLUS 0x8 // + 1U << 3U = 8
# define FLAG_SPACE 0x10 // ' ' 1U << 4U = 16
# define FLAG_DOT 0x20 // . (precision) 1U << 5U = 32

# define B16_UPPER "0123456789ABCDEF"
# define B16_LOWER "0123456789abcdef"
# define B10 "0123456789"

size_t		ft_strlen(const char *s);
ssize_t		ft_putchar_fd(char c, int fd);
size_t		ft_putnbr_base_fd(unsigned long long n, char *base, int fd);
void		ft_putstr_fd(char *s, int fd);

typedef struct s_state
{
	int		flags;
	int		bytes;
	va_list	args;
	void	(*fn_ptr_table[9])(struct s_state *);
	int		precision;
}			t_state;

#endif