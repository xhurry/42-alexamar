int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	letter;
	int	only_lower;

	x = 0;
	only_lower = 0;
	while (str[x] != '\0')
	{
		letter = str[x];
		if (letter >= 97 && letter <= 122)
		{
			only_lower = 1;
		}
		else
		{
			only_lower = 0;
			return (0);
		}
		x++;
	}
	return (1);
}
