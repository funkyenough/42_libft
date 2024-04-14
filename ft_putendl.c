/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 11:15:50 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/14 11:17:35 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

int	main(void)
{
	char str[] = "Hello, World!";
	ft_putendl(str);
	return 0;
}