/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:46:15 by yinhong           #+#    #+#             */
/*   Updated: 2024/03/31 20:46:42 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	s = str;
}

// int	main(void)
// {
// 	char *str = "My Name is Ying.";
// 	ft_bzero(str);
// }