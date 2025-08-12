
#include "../libft.h"

void	ft_putnbr(int n)
{
	char	result;

	result = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	result = (n % 10) + '0';
	write(1, &result, 1);
}