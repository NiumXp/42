#include <unistd.h>

#define STDOUT 1

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT, str++, 1);
}
