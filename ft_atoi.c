/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:14:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/18 17:24:14 by yinhong          ###   ########.fr       */
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
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		if (sign == 1 && n > (LONG_MAX - (*str - '0')) / 10)
			return ((int)LONG_MAX);
		else if (sign == -1 && -n < (LONG_MIN + (*str - '0')) / 10)
			return (0);
		n = 10 * n + (*str - '0');
		str++;
	}
	return ((int)sign * n);
}

// int	main(void)
// {
// 	char str[] = "-9223372036854775809";
// 	printf("ft_at: %d\n", ft_atoi(str));
// 	printf("atoi: %d\n", atoi(str));
// }