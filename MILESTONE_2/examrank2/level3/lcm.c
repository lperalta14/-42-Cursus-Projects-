#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int ft_lcm(int nbr1, int nbr2)
{
	int lcm;
	if(nbr1 > nbr2)
		lcm = nbr1;
	else
		lcm = nbr2;
	if (nbr1 == 0 || nbr2 == 0)
		return(0);
	while((lcm%nbr1 != 0) || (lcm%nbr2 != 0))
		lcm++;
	return(lcm);
}
int main(int argc, char **argv)
{
	int lcm;
	if(argc == 3)
	{
		lcm = ft_lcm(atoi(argv[1]),atoi(argv[2]));
		printf("%d", lcm);
	}
	write(1, "\n", 1);
	return(0);
}
