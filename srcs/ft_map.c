/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:37:36 by dboyer            #+#    #+#             */
/*   Updated: 2020/02/06 13:20:04 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_map(t_list *list, void (*f)(t_element *element))
{
	if (list->first)
	{
		ft_list_iter(list->first, f);
	}
}
