/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 12:00:42 by biswbara          #+#    #+#             */
/*   Updated: 2019/03/17 12:04:28 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	struct s_list *next;
	void 	*data;
}	t_list;

int		ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	while(begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}
