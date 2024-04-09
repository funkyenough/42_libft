#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	if (c == 0)
		return ((char *)s);
	s--;
	while (*s)
	{
		if ((char)c == *s)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	int c = (int)'H';

// 	printf("strrchr: %p\n", strrchr(str, c));
// 	printf("ft_strr: %p\n", ft_strrchr(str, c));
// }