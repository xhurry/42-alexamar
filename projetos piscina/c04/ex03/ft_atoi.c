int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	total;

	c = 0;
	s = 1;
	total = 0;
	while (str[c] <= 13 || str[c] == 32)
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		total = (total * 10) + str[c] - '0';
		c++;
	}
	return (total * s);
}
