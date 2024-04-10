/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:14:31 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:14:31 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	char	a;

	a = (char)c;
	if ('0' <= a && a <= '9')
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char c = '8';
// 	printf("isdigit: %d\n", isdigit((int)c));
// 	printf("ft_isdi: %d\n", ft_isdigit((int)c));
// }