#define STDOUT 1

void	ft_hello(void)
{
	write(STDOUT, "Hello\n", sizeof(char) * 7);
}
