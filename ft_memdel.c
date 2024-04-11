/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:04:22 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/11 13:08:14 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (*ap != NULL)
		free(*ap);
	ap = NULL;
}

// int	main(void)
// {
// 	char	*str;

// 	str = strdup("Hello, World!");
// 	printf("Before: %s\n", str);
// 	ft_memdel((void **)&str);
// 	printf("after: %s\n", (str == NULL) ? "NULL" : str);
// 	return (0);
// }
