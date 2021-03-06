/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 09:39:26 by dboyer            #+#    #+#             */
/*   Updated: 2020/01/23 17:17:58 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_percent(t_format format)
{
	int		result;

	result = 1;
	if (format.min < 0)
		format.space_padding = format.min + 1;
	else if (format.min > 0)
		format.space_padding = format.min - 1;
	result += ft_print_space_before(format);
	ft_putchar('%');
	result += ft_print_space_after(format);
	return (result);
}
