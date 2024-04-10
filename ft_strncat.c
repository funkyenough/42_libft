#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ptr;

	ptr = s1;
	while (*ptr)
		ptr++;
	while (*s2 && n)
	{
		*ptr++ = *s2++;
		n--;
	}
	*ptr = '\0';
	return (s1);
}

#include <stdio.h>

// int	main(void)
// {
// 	char	dest[15] = "Hello";
// 	char	ft_d[15] = "Hello";
// 	char	src[] = ", World!";
// 	int		n;

// 	n = 100;
// 	printf("strncat: %s\n", strncat(dest, src, n));
// 	printf("ft_dstr: %s\n", ft_strncat(ft_d, src, n));
// 	return (0);
// }
