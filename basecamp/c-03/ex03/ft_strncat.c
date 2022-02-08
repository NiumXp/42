char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	steps;

	steps = 0;
	while (*dest)
	{
		++steps;
		++dest;
	}
	while (nb-- > 0 && *src)
	{
		*dest++ = *src++;
		++steps;
	}
	*dest = '\0';
	return (dest - steps);
}
