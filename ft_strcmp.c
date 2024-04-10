#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "Hello, World!";
// 	char s2[] = "Hello, World";

// 	printf("strcmp: %d\n", strcmp(s1, s2));
// 	printf("ft_str: %d\n", ft_strcmp(s1, s2));
// }