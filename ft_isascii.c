int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c = 'C';
	printf("isascii: %d\n", isascii((int)c));
	printf("ft_isas: %d\n", ft_isascii((int)c));
}