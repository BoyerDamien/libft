/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_objects.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:53:50 by dboyer            #+#    #+#             */
/*   Updated: 2020/02/18 11:47:46 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef LIBFT_OBJECTS_H
#	define LIBFT_OBJECTS_H

typedef struct		s_format
{
	char			converter;
	int				min;
	int				max;
	int				point;
	int				padding;
	int				inversed;
	int				min_zero;
	int				max_zero;
	int				space_padding;
	int				zero_padding;
	char			*flag;
}					t_format;

typedef struct		s_element
{
	void				*content;
	struct s_element	*previous;
	struct s_element	*next;
}					t_element;

typedef struct		s_list
{
	int					size;
	struct s_element	*first;
}					t_list;

typedef struct	s_array
{
	int		size;
	size_t	elem_size;
	void	*content;
}				t_array;

#	endif