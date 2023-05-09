/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:11:45 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/09 17:48:43 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	print_c(t_state *state)
{
	char	c;

	c = va_arg(state->args, int);
	state->bytes += write(1, &c, 1);
}

void	print_s(t_state *state)
{
	char	*s;

	s = va_arg(state->args, char *);
	if (!s)
		s = "(null)";
	state->bytes += write(1, s, ft_strlen(s));
}

void	print_p(t_state *state)
{
	void	*ptr;
	char	buffer[8];
	size_t	utoalen;

	ptr = va_arg(state->args, void *);
	if (!ptr)
		state->bytes += write(1, "(nil)", 5);
	else
	{
		utoalen = ft_utoa(buffer, (unsigned long)ptr, B16_LOWER);
		printf("utoalen=%ld\n", utoalen);
		state->bytes += write(1, "0x", 2);
		state->bytes += write(1, buffer, 8);
	}
}

void	print_d(t_state *state)
{
	int	d;

	d = va_arg(state->args, int);
	state->bytes += ft_putnbr_base_fd(d, B10, 1);
}

void	print_i(t_state *state)
{
	int	i;

	i = va_arg(state->args, int);
	state->bytes += ft_putnbr_base_fd(i, B10, 1);
}

void	print_u(t_state *state)
{
	unsigned int	u;

	u = va_arg(state->args, int);
	state->bytes += ft_putnbr_base_fd((size_t)u, B10, 1);
}

void	print_x(t_state *state)
{
	int	x;

	x = va_arg(state->args, int);
	state->bytes += ft_putnbr_base_fd(x, B16_LOWER, 1);
}

void	print_big_x(t_state *state)
{
	int	big_x;

	big_x = va_arg(state->args, int);
	state->bytes += ft_putnbr_base_fd(big_x, B16_UPPER, 1);
}

void	print_percent(t_state *state)
{
	state->bytes += write(1, "%", 1);
}

void	init_func_table(t_state *state)
{
	state->fn_ptr_table[0] = print_c;
	state->fn_ptr_table[1] = print_s;
	state->fn_ptr_table[2] = print_p;
	state->fn_ptr_table[3] = print_d;
	state->fn_ptr_table[4] = print_i;
	state->fn_ptr_table[5] = print_u;
	state->fn_ptr_table[6] = print_x;
	state->fn_ptr_table[7] = print_big_x;
	state->fn_ptr_table[8] = print_percent;
}

void	parse_conversion(const char **fmt, t_state *state)
{
	if (**fmt == 'c')
		state->fn_ptr_table[0](state);
	else if (**fmt == 's')
		state->fn_ptr_table[1](state);
	else if (**fmt == 'p')
		state->fn_ptr_table[2](state);
	else if (**fmt == 'd')
		state->fn_ptr_table[3](state);
	else if (**fmt == 'i')
		state->fn_ptr_table[4](state);
	else if (**fmt == 'u')
		state->fn_ptr_table[5](state);
	else if (**fmt == 'x')
		state->fn_ptr_table[6](state);
	else if (**fmt == 'X')
		state->fn_ptr_table[7](state);
	else if (**fmt == '%')
		state->fn_ptr_table[8](state);
	(*fmt)++;
}

void	parse_precision(const char **fmt, t_state *state)
{
	if (**fmt == '.')
	{
		state->flags |= FLAG_DOT;
		(*fmt)++;
	}
}

void	parse_flags(const char **fmt, t_state *state)
{
	while (*fmt)
	{
		if (**fmt == '-')
			state->flags |= FLAG_LEFT;
		else if (**fmt == '0')
			state->flags |= FLAG_ZERO;
		else if (**fmt == '.')
			state->flags |= FLAG_DOT;
		else if (**fmt == '#')
			state->flags |= FLAG_HASH;
		else if (**fmt == ' ')
			state->flags |= FLAG_SPACE;
		else if (**fmt == '+')
			state->flags |= FLAG_PLUS;
		else
			break ;
		(*fmt)++;
	}
	parse_precision(fmt, state);
	parse_conversion(fmt, state);
}

void	parse_fmt(const char **fmt, t_state *state)
{
	while (**fmt)
	{
		if (**fmt != '%')
		{
			state->bytes += write(1, *fmt, 1);
			(*fmt)++;
			continue ;
		}
		else
		{
			(*fmt)++;
			parse_flags(fmt, state);
		}
	}
}

int	ft_printf(const char *fmt, ...)
{
	t_state	state;

	state.bytes = 0;
	state.flags = 0;
	va_start(state.args, fmt);
	init_func_table(&state);
	parse_fmt(&fmt, &state);
	va_end(state.args);
	return (state.bytes);
}
