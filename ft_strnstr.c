/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:25 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:26 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack && len)
	{
		i = 0;
		while (*(needle + i) == *(haystack + i))
		{
			if (*(needle + i + 1) == 0)
				return ((char *)haystack);
			i++;
		}
		haystack++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char haystack[] = "Hello, World!";
// 	char needle[] = "lo,";
// 	int n = 10;
// 	printf("strstr: %s\n", strnstr(haystack, needle, n));
// 	printf("ft_str: %s\n", ft_strnstr(haystack, needle, n));
// }