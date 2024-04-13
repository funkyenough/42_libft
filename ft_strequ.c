/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:23:43 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/12 12:28:12 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	while (*s1 || *s2)
	{
		if (*s1++ != *s2++)
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char s1[] = "Hello, World!";
// 	char s2[] = "Hello, World";

// 	printf("ft_strequ: %d\n", ft_strequ(s1, s2));
// 	return (0);
// }