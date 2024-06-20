#include "../libft.h"
#include <stdio.h>

unsigned int	itou(int i)
{
	long			li;
	unsigned int	ui;

	ui = 0;
	li = (long)i;
	if (li < 0)
		ui = -li;
	return (ui);
}
unsigned int	gcd(int a, int b)
{
	unsigned int	remainder;
	unsigned int	gcd;

	// unsigned int	ua;
	// unsigned int	ub;
	if (a == 0 || b == 0)
		return (0);
	// ua = itou(a);
	// ub = itou(b);
	remainder = a % b;
	while (remainder)
	{
		a = b;
		b = remainder;
		remainder = a % b;
	}
	gcd = b;
	return (gcd);
}

int	main(void)
{
	printf("Result of GCD is: %d\n", gcd(1112, 695));
	return (0);
}