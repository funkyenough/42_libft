/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:28:30 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/22 13:15:14 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst == NULL)
		return ;
	next_node = *lst;
	if (*lst != NULL)
	{
		while (next_node != NULL)
		{
			if (del)
				del(next_node->content);
			*lst = next_node->next;
			free(next_node);
			next_node = *lst;
		}
	}
}
