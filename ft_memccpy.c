/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/04/10 12:14:49 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:14:49 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *d;
	const char *s;

	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
		if (*(s - 1) == c)
			return (d);
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int n = 6;
// 	const char src[] = "source";
// 	char dest[] = "I am the destination";

// 	printf("ft_memc: %s\n", (char *)ft_memccpy(dest, src, 'o', n));
// 	printf("memccpy: %s\n", (char *)memccpy(dest, src, 'o', n));
// 	return (0);
// }