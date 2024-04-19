/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:29:12 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/19 17:02:56 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL || s == NULL)
		return (NULL);
	ptr = str;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	if (start < ft_strlen(s))
	{
		while (--len + 1)
			*ptr++ = s[start++];
	}
	*ptr = '\0';
	return (str);
}
