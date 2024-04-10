/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:31 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:32 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	char	a;
	char	diff;

	a = (char)c;
	diff = 'a' - 'A';
	if (('a' <= a && a <= 'z'))
		return ((int)(a - diff));
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