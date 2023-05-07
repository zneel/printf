/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:11:45 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/06 21:31:18 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_c(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_s(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_p(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_d(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_i(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_u(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_x(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_big_x(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
}

void	print_percent(const char *fmt, t_state *state, va_list args)
{
	(void)fmt;
	(void)state;
	(void)args;
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

void	parse_fmt(const char *fmt, va_list args, t_state *state)
{
	while (*fmt)
	{
		if (*fmt == '%')
		{
			if (*fmt == 'c')
				state->fn_ptr_table[0](fmt, state, args);
			else if (*fmt == 's')
				state->fn_ptr_table[1](fmt, state, args);
			else if (*fmt == 'p')
				state->fn_ptr_table[2](fmt, state, args);
			else if (*fmt == 'd')
				state->fn_ptr_table[3](fmt, state, args);
			else if (*fmt == 'i')
				state->fn_ptr_table[4](fmt, state, args);
			else if (*fmt == 'u')
				state->fn_ptr_table[5](fmt, state, args);
			else if (*fmt == 'x')
				state->fn_ptr_table[6](fmt, state, args);
			else if (*fmt == 'X')
				state->fn_ptr_table[7](fmt, state, args);
			else if (*fmt == '%')
				state->fn_ptr_table[8](fmt, state, args);
		}
		else
			write(1, fmt, 1);
		fmt++;
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	t_state	state;

	state.bytes = 0;
	state.flags = 0;
	va_start(args, fmt);
	init_func_table(&state);
	parse_fmt(fmt, args, &state);
	va_end(args);
	return (state.bytes);
}
