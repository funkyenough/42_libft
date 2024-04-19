/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:28:30 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/19 16:56:28 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	next_node = *lst;
	if (lst != NULL && *lst != NULL)
	{
		while (next_node != NULL)
		{
			del(next_node->content);
			*lst = next_node->next;
			free(next_node);
			next_node = *lst;
		}
	}
}
