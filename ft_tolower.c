int	ft_tolower(int c)
{
	char	a;
	char	diff;

	a = (char)c;
	diff = 'a' - 'A';
	if (('A' <= a && a <= 'Z'))
		return ((int)(a + diff));
	else
		return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char a = 'C';
// 	printf("tolower: %c\n", tolower((int)a));
// 	printf("ft_tolo: %c\n", ft_tolower((int)a));
// }