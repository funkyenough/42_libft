#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char c = 'C';
// 	printf("isalnum: %d\n", isalnum((int)c));
// 	printf("ft_isal: %d\n", ft_isalnum((int)c));
// }