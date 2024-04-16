#include "libft.h"

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strndup(char *src, int n)
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

int	str_count(char *str, char *charset)
{
	int	i;
	int	wordcount;
	int	flag;

	i = 0;
	wordcount = 0;
	flag = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		while (str[i] && !is_charset(str[i], charset))
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

char	**ft_split(char *str, char *charset)
{
	char **result;
	int i;
	int j;
	int wordlength;

	i = 0;
	j = 0;
	wordlength = 0;
	result = (char **)malloc((str_count(str, charset) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		while (is_charset(str[i], charset))
			i++;
		wordlength = 0;
		while (str[i + wordlength] && !is_charset(str[i + wordlength], charset))
			wordlength++;
		if (wordlength)
			result[j++] = ft_strndup(&str[i], wordlength);
		i += wordlength;
	}
	result[j] = NULL;
	return (result);
}