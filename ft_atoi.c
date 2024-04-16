/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:14:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/16 19:22:55 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	const char	*ptr;
	int			n;
	int			sign;

	ptr = str;
	n = 0;
	sign = 1;
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while ('0' <= *ptr && *ptr <= '9')
	{
		n = 10 * n + (*ptr - '0');
		ptr++;
	}
	return (sign * n);
}

// int	main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi("-123456"));
// 	return (0);
// }