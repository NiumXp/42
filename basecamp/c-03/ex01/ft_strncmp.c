int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	r;

	while (n-- > 0 && (*s1 || *s2))
	{
		r = (*s1++ - *s2++);
		if (r)
			return (r);
	}
	return (0);
}
