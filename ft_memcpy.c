#include <string.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

#include <stdio.h>

// int	main(void)
// {
// 	int n = 15;
// 	const char src[] = "I am the source";
// 	char dest[] = "I am the destination";

// 	printf("The output is: %s\n", (char *)memcpy(dest, src, n));
// 	return (0);
// }

// int	main(void)
// {
// 	int	src[] = {1, 2, 3, 4, 5};
// 	int	dest[5];

// 	memcpy(dest, src, 5 * sizeof(int));
// 	printf("The output is: ");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", dest[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }

// struct		example
// {
// 	int		a;
// 	float	b;
// 	char	c;
// };

// int	main(void)
// {
// 	struct example src = {1, 2.5, 'c'};
// 	struct example dest;

// 	memcpy(&dest, &src, sizeof(src));

// 	printf("The output is: a = %d, b = %.2f, c = %c\n", dest.a, dest.b, dest.c);

// 	return (0);
// }