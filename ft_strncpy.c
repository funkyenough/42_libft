/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:24 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:24 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ptr;

	ptr = dest;
	while (*src && n--)
		*ptr++ = *src++;
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char ft_d[14];
// 	char dest[14];

// 	printf("ft_strn: %s\n", ft_strncpy(ft_d, str, 10));
// 	printf("strncpy: %s\n", strncpy(dest, str, 10));
// 	return (0);
// }