/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:14:03 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/10 12:16:59 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	const char *ptr;
	int n;
	int sign;

	ptr = str;
	n = 0;
	sign = 1;
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= 1;
		ptr++;
	}
	while ('0' <= *ptr && *ptr <= '9')
		n = 10 * n + (*ptr + '0');
	return (sign * n);
}