/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:27 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:28 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	if (c == 0)
		return ((char *)s);
	s--;
	while (*s)
	{
		if ((char)c == *s)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	int c = (int)'H';

// 	printf("strrchr: %p\n", strrchr(str, c));
// 	printf("ft_strr: %p\n", ft_strrchr(str, c));
// }