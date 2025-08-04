#include"libft.h"

int main(int argc, char **argv)
{
	int i = 1;
	while(argc < 1)
	{
		ft_putnbr_fd(ft_atoi(argv[i]), 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
	return(0);
}
