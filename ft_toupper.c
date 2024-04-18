/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:31 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/17 14:30:56 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	char	diff;

	diff = 'a' - 'A';
	if (('a' <= c && c <= 'z'))
		return ((int)(c - diff));
	else
		return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char a = 'c';
// 	printf("toupper: %c\n", toupper((int)a));
// 	printf("ft_toup: %c\n", ft_toupper((int)a));
// }