char	*ft_strcat(char *dest, char *src)
{
	int	steps;

	steps = 0;
	while (*dest)
	{
		++steps;
		++dest;
	}
	while (*src)
	{
		*dest++ = *src++;
		++steps;
	}
	*dest = '\0';
	return (dest - steps);
}
