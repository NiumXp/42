#include <unistd.h>

#define STDOUT 1

void	ft_putnbr(int nb)
{
	char	unit;

	if (nb < 0)
	{
		write(STDOUT, "-", 1);
		unit = (nb % 10) * -1 + '0';
	}
	else
		unit = (nb % 10) + '0';
	nb /= 10;
	if (nb < 1)
		nb *= -1;
	if (nb != 0)
		ft_putnbr(nb);
	write(STDOUT, &unit, 1);
}
