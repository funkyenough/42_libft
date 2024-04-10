/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:14:17 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:14:17 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	char	a;

	a = (char)c;
	if (('A' <= a && a <= 'Z') || ('a' <= a && a <= 'z'))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("isalpha: %d\n", isalpha((int)'Z'));
// 	printf("ft_isal: %d\n", ft_isalpha((int)'c'));
// }