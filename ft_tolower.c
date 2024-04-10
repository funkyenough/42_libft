/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:16:33 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:34 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	char	a;
	char	diff;

	a = (char)c;
	diff = 'a' - 'A';
	if (('A' <= a && a <= 'Z'))
		return ((int)(a + diff));
	else
		return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char a = 'C';
// 	printf("tolower: %c\n", tolower((int)a));
// 	printf("ft_tolo: %c\n", ft_tolower((int)a));
// }