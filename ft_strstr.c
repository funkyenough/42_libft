#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (*(needle + i) == *(haystack + i))
		{
			if (*(needle + i + 1) == 0)
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char haystack[] = "Hello, World!";
// 	char needle[] = "lo,";
// 	printf("strstr: %s\n", strstr(haystack, needle));
// 	printf("ft_str: %s\n", ft_strstr(haystack, needle));
// }