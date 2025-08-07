#include "libft.h"

int main(int argc, char **argv)
{
	int i = 1;
	while(i < argc)
	{
		printf("%ld\n", ft_atol(argv[i]));
		i++;
	}
	return(0);
}