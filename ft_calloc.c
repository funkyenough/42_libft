/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:32:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/16 19:43:44 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *alloc;
	size_t i;

	alloc = (char *)malloc(size * count);
	if (alloc == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		alloc[i] = 0;
		i++;
	}
	return ((void *)alloc);
}