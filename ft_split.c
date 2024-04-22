/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:01:42 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/22 11:02:52 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *src, int n)
{
	char	*dest;
	char	*ptr;

	dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ptr = dest;
	while (*src != 0 && n)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}

static int	str_count(const char *str, char c)
{
	int	i;
	int	wordcount;
	int	flag;

	i = 0;
	wordcount = 0;
	flag = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == c))
			i++;
		while (str[i] && (str[i] != c))
		{
			flag = 1;
			i++;
		}
		if (flag)
		{
			wordcount++;
			flag = 0;
		}
	}
	return (wordcount);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		i;
	int		j;
	int		wordlength;

	i = 0;
	j = 0;
	wordlength = 0;
	result = (char **)malloc((str_count(str, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		wordlength = 0;
		while (str[i + wordlength] && (str[i + wordlength] != c))
			wordlength++;
		if (wordlength)
			result[j++] = ft_strndup(&str[i], wordlength);
		i += wordlength;
	}
	result[j] = NULL;
	return (result);
}
