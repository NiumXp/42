#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char chr)
{
	write(STDOUT, &chr, sizeof(chr));
}

void	ft_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
		ft_putchar(number++);
}
