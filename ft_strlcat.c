#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*ptr;
	int		len;

	if (dstsize == 0 || ft_strlen(dst) > dstsize)
		return (dstsize + ft_strlen(src));
	ptr = dst;
	len = dstsize - ft_strlen(dst);
	while (*ptr)
		ptr++;
	while (*src && len)
	{
		if (len == 1)
		{
			*ptr = 0;
			break ;
		}
		*ptr++ = *src++;
		len--;
	}
	*ptr = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[15] = "Hello";
// 	char	ft_d[15] = "Hello";
// 	char	src[] = ", World!";
// 	int		n;

// 	n = 0;
// 	printf("strlcat: %lu\n", strlcat(dest, src, n));
// 	printf("strlcat: %s\n", dest);
// 	printf("ft_dstr: %lu\n", ft_strlcat(ft_d, src, n));
// 	printf("ft_dstr: %s\n", ft_d);
// 	return (0);
// }