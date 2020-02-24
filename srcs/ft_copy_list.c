/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:21:02 by dboyer            #+#    #+#             */
/*   Updated: 2020/02/06 13:28:24 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list ft_copy_list(t_list list)
{
	t_list new;
	t_element next;

	if (list)
	{
		next = list.first->next;
		new = ft_list();
		while(next)
		{
			ft_add_back(new, ft_new_element(next->content));
			next = next->next;
		}
	}
	return (new);
}
