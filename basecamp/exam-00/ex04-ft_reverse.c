int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

char	*ft_reverse(char *str)
{
	char	temp;
	int		index;
	int		length;

	index = 0;
	length = ft_strlen(str) - 1;
	while (index < (length / 2))
	{
		temp = str[index];
		str[index] = str[length - index];
		str[length - index] = temp;
		++index;
	}
	return (str);
}
