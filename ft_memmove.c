#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello, world!";
// 	memmove(str + 6, str + 7, 6); // Move "world!" one position to the left
// 	printf("The output is: %s\n", str);
// 	return (0);
// }