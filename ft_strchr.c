#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)c == *s)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	int c = (int)'\0';

// 	printf("strchr: %p\n", strchr(str, c));
// 	printf("ft_str: %p\n", ft_strchr(str, c));
// }