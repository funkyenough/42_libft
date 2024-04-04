#include <string.h>

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
		if (*(s - 1) == c)
			return (d);
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int n = 6;
// 	const char src[] = "source";
// 	char dest[] = "I am the destination";

// 	printf("The output is: %s\n", (char *)memccpy(dest, src, 'o', n));
// 	return (0);
// }