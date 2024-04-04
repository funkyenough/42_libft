
#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = (const char *)s;
	while (n--)
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("memchr: %s\n", (char *)memchr("Hello, World!", 'W', 10));
// 	return (0);
// }