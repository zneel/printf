/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:14:10 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/06 21:32:54 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);

# define FLAG_HASH (1U << 0U)
# define FLAG_ZERO (1U << 1U)
# define FLAG_LEFT (1U << 2U)
# define FLAG_PLUS (1U << 3U)
# define FLAG_SPACE (1U << 4U)
# define FLAG_UPPERCASE (1U << 5U)
# define FLAG_POINTER (1U << 6U)

# define BASE_16_UPPER "0123456789ABCDEF"
# define BASE_16_LOWER "0123456789abcdef"
# define BASE_10 "0123456789"

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_base_fd(int n, char *base, int fd);
void	ft_putstr_fd(char *s, int fd);

typedef struct s_state
{
	int	flags;
	int	bytes;
	void (*fn_ptr_table[9])(const char *, struct s_state *, va_list);
}		t_state;

#endif