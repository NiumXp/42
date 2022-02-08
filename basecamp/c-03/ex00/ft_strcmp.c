int	ft_strcmp(char *s1, char *s2)
{
	int	r;

	while (*s1 || *s2)
	{
		r = (*s2++ - *s1++);
		if (r < 0)
			return (1);
		if (r > 0)
			return (-1);
	}
	return (0);
}
