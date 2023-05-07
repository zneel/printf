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

int	ft_printf(const char *, ...);
void    print_c(const char *fmt, ...);

# define FLAG_HASH (1U << 0U)
# define FLAG_ZERO (1U << 1U)
# define FLAG_LEFT (1U << 2U)
# define FLAG_PLUS (1U << 3U)
# define FLAG_SPACE (1U << 4U)
# define FLAG_UPPERCASE (1U << 5U)
# define FLAG_POINTER (1U << 10U)

typedef struct s_flags
{
    int flags;
}               t_flags;

#endif