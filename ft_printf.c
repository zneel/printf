/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvier <ebouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:11:45 by ebouvier          #+#    #+#             */
/*   Updated: 2023/05/10 18:30:19 by ebouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	print_c(t_state *state)
{
	char	c;

	c = va_arg(state->args, int);
	state->bytes += out(state, &c, 1);
}

void	print_s(t_state *state)
{
	char	*s;

	s = va_arg(state->args, char *);
	if (!s)
		s = "(null)";
	state->bytes += out(state, s, ft_strlen(s));
}

void	print_p(t_state *state)
{
	void	*ptr;
	char	buffer[64];
	size_t	utoalen;

	ptr = va_arg(state->args, void *);
	if (!ptr)
		state->bytes += out(state, "(nil)", 5);
	else
	{
		utoalen = ultoa_base(buffer, (unsigned long)ptr, B16_LOWER, 2);
		buffer[0] = '0';
		buffer[1] = 'x';
		state->bytes += out(state, buffer, utoalen);
	}
}

void	print_d(t_state *state)
{
	int		d;
	char	buffer[64];
	size_t	itoalen;

	d = va_arg(state->args, int);
	itoalen = ltoa_base(buffer, d, B10);
	state->bytes += out(state, buffer, itoalen);
}

void	print_i(t_state *state)
{
	int		i;
	char	buffer[64];
	size_t	itoalen;

	i = va_arg(state->args, int);
	itoalen = ltoa_base(buffer, i, B10);
	state->bytes += out(state, buffer, itoalen);
}

void	print_u(t_state *state)
{
	unsigned int	u;
	char			buffer[64];
	size_t			uitoalen;

	u = va_arg(state->args, unsigned int);
	uitoalen = uitoa_base(buffer, u, B10);
	state->bytes += out(state, buffer, uitoalen);
}

void	print_x(t_state *state)
{
	unsigned int	x;
	char			buffer[64];
	size_t			itoalen;

	x = va_arg(state->args, unsigned int);
	itoalen = ultoa_base(buffer, x, B16_LOWER, 0);
	state->bytes += out(state, buffer, itoalen);
}

void	print_big_x(t_state *state)
{
	unsigned int	big_x;
	char			buffer[64];
	size_t			itoalen;

	big_x = va_arg(state->args, unsigned int);
	itoalen = ultoa_base(buffer, big_x, B16_UPPER, 0);
	state->bytes += out(state, buffer, itoalen);
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
			parse_conversion(fmt, state);
		}
	}
}

void	init_state(t_state *state)
{
	state->bytes = 0;
	state->flags = 0;
}

int	ft_printf(const char *fmt, ...)
{
	t_state	state;

	if (!fmt)
		return (-1);
	init_state(&state);
	va_start(state.args, fmt);
	init_func_table(&state);
	parse_fmt(&fmt, &state);
	va_end(state.args);
	return (state.bytes);
}
