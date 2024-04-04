// #include "libft.h"
#include <stdlib.h>
#include <string.h>

// size_t	ft_strlen(const char *s)
// {
// 	const char	*ptr;

// 	ptr = s;
// 	while (*ptr)
// 		ptr++;
// 	return (ptr - s);
// }

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	char	*ptr;

	len = ft_strlen(s);
	dup = (char *)malloc(len * sizeof(char));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *ft_;
// 	char *dup;

// 	ft_ = ft_strdup(str);
// 	dup = strdup(str);
// 	printf("ft_dup: %s\n", ft_);
// 	printf("strdup: %s\n", dup);
// 	free(ft_);
// 	free(dup);
// 	return (0);
// }