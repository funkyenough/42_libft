int	ft_toupper(int c)
{
	char	a;
	char	diff;

	a = (char)c;
	diff = 'a' - 'A';
	if (('a' <= a && a <= 'z'))
		return ((int)(a - diff));
	else
		return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char a = 'c';
// 	printf("toupper: %c\n", toupper((int)a));
// 	printf("ft_toup: %c\n", ft_toupper((int)a));
// }