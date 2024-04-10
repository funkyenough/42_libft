#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char src[] = "Hello, World!";
	char dest[15] = "abcdef";
	printf("ft_cat: %s\n", ft_strcat(dest, src));
	printf("strcat: %s\n", strcat(dest, src));
}