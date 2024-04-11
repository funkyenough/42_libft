/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:15:41 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/11 13:05:20 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

// int	main(void)
// {
// 	int n = 10;
// 	char *str = ft_strnew(n);
// 	printf("%2X\n", *str);
// 	for (int i = 0; i < n + 1000; i++)
// 	{
// 		printf("%2X", str[i]);
// 		if (i == n)
// 			printf(" ||");
// 	}
// 	return (0);
// }