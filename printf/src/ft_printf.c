/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:14:49 by llapage           #+#    #+#             */
/*   Updated: 2018/11/18 18:00:37 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_type(char *format, va_list ap, int count, int i)
{
	if (format[i] == '%')
	{
		ft_putchar('%');	
		count++;
		va_end(ap);
		return ;
	}
}

int		ft_printf(const char *restrict format, ...)
{
	int		i;
	va_list ap;
	int		count;
	
	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i++]);
			count++;
		}
		else
		{
			ft_type((char *)format, ap, count, i);
			i++;
		}
		i++;

	}
	return (count);
}
