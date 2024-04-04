int ft_isspace(int c);

int ft_atoi(const char *nptr)
{
	const char *ptr;
	int n;
	int sign;

	ptr = nptr;
	n = 0;
	sign = 1;
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= 1;
		ptr++;
	}
	while ('0' <= *ptr && *ptr <= '9')
		n = 10 * n + (*ptr + '0');
	return (sign * n);
}