/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:27:11 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/12 12:28:57 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	while ((*s1 || *s2) && n)
	{
		if (*s1++ != *s2++)
			return (0);
		n--;
	}
	return (1);
}

// int	main(void)
// {
// 	char s1[] = "Hello, World!";
// 	char s2[] = "Hello, World";

// 	printf("ft_strnequ: %d\n", ft_strnequ(s1, s2, 13));
// 	return (0);
// }