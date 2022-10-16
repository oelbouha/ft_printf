

#include "ft_printf.h"


int	ft_count(int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i = 1;
		nb = n * -1;
	}
	else
		nb = n;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}