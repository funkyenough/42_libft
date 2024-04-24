/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:32:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/23 18:58:22 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*alloc;

	if (count == 0)
		count = 1;
	if (size > SIZE_MAX / count)
		return (NULL);
	alloc = (char *)malloc(size * count);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, size * count);
	return ((void *)alloc);
}
