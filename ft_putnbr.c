/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:55 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/15 16:42:05 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr(int n)
{
	long nb;
	nb = (long)n;
	if (nb < 0)
		nb *= -1;
	if (nb >= 10)
	ft_putnbr(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}

int	main(void)
{
	int n = 12345;
	ft_putnbr(n);
	return 0;
}