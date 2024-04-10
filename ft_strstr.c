/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:30 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:30 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (*(needle + i) == *(haystack + i))
		{
			if (*(needle + i + 1) == 0)
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char haystack[] = "Hello, World!";
// 	char needle[] = "lo,";
// 	printf("strstr: %s\n", strstr(haystack, needle));
// 	printf("ft_str: %s\n", ft_strstr(haystack, needle));
// }