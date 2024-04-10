#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "Hello, World!";
// 	char s2[] = "Hello, World";
// 	int n = 13;

// 	printf("strcmp: %d\n", strncmp(s1, s2, n));
// 	printf("ft_str: %d\n", ft_strncmp(s1, s2, n));
// }