int	ft_recursive_factorial(int nb)
{
	int	a;

	a = 0;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
	{
		a = nb * ft_recursive_factorial(nb - 1);
		return (a);
	}
}
