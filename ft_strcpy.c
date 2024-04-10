/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:07 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:07 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
		*ptr++ = *src++;
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char ft_d[14];
// 	char dest[14];

// 	printf("ft_str: %s\n", ft_strcpy(ft_d, str));
// 	printf("strcpy: %s\n", strcpy(dest, str));
// 	return (0);
// }