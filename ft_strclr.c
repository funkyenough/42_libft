/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:08:55 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/11 13:13:49 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	while (*s)
		*s = '\0';
}

int	main(void)
{
	char str[] = "Hello, World!";
	// int n = ft_strlen(str);

	printf("Before: %s\n", str);
	ft_strclr(str);
	printf("After : %s\n", str);

	// for (int i = 0; i < n + 1000; i++)
	// {
	// 	printf("%2X", str[i]);
	// 	if (i == n)
	// 		printf(" ||");
	// }
	return (0);
}