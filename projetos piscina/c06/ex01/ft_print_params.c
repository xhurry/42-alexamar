#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

int	main(int argc, char **argv)
{
	int	c;

	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
