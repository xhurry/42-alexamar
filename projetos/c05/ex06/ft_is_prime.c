int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (nb != a)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
