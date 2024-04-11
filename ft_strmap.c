/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:01:14 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/11 16:11:08 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*ptr;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	ptr = str;
	while (*s)
		*ptr++ = (*f)(*(s++));
	*ptr = '\0';
	return (str);
}

// char	to_zero(char c)
// {
// 	return (c);
// }

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *ptr;
// 	printf("Before Address: %p\nBefore String: %s\n", str, str);
// 	ptr = ft_strmap(str, &to_zero);
// 	printf("After  Address: %p\nAfter  String: %s\n", ptr, ptr);
// 	return (0);
// }