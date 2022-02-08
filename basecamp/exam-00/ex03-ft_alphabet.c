#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char chr)
{
	write(STDOUT, &chr, sizeof(chr));
}

void	ft_alphabet(void)
{
	char	chr;

	chr = 'A';
	while (chr <= 'Z')
	{
		if (chr % 2)
			ft_putchar(chr + 32);
		else
			ft_putchar(chr);
		chr++;
	}
}
