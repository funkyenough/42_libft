/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:45:17 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/11 14:50:34 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
	{
		(*f)(s);
		s++;
	}
}

// void	to_zero(char *c)
// {
// 	*c = '0';
// }

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	printf("Before: %s\n", str);
// 	ft_striter(str, &to_zero);
// 	printf("after: %s\n", str);
// 	return (0);
// }