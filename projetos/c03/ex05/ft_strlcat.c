unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s;

	i = 0;
	j = 0;
	
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size >= i)

	while (src[j] != '\0' && j < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}
