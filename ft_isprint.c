int	ft_isprint(int c)
{
	char	a;

	a = (char)c;
	if ((' ' <= a && a <= '~'))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char a = '~';
// 	printf("isprint: %d\n", isprint((int)a));
// 	printf("ft_ispr: %d\n", ft_isprint((int)a));
// }