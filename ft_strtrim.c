/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinhong <yinhong@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:28:11 by yinhong           #+#    #+#             */
/*   Updated: 2024/04/17 13:41:32 by yinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char * ft_strtrim(char const *s)
{
	char *str;
	char *ptr;
	int start;
	int end;

	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (start > end) // If the string is entirely whitespace
		return ft_strdup(""); // Return an empty string
	str = (char *)malloc(((end + 1) - start + 1) * sizeof(char));
	if (str == NULL)
		return NULL;
	ptr = str;
	while (start <= end)
		*ptr++ = s[start++];
	*ptr = '\0';
	return str;
}

// int main(void)
// {
// 	char const *s = "  \t \t \n   \n\n\n\t";
// 	printf("ft_strtrim: %s\n", ft_strtrim(s));

// 	return 0;
// }