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

int	ft_find_next_prime(int nb)
{
	if (nb < 0) 
		return (2);
	else
	{
		while (nb < 2147483647 && !ft_is_prime(nb))
			nb++;
		return (nb);
	}
}
