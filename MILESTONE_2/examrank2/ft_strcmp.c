#include <unistd.h>
#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return(*s1-*s2);
		else 
		{	s1++;
			s2++;}
	}
	return(*s1-*s2);
}

int main (int argc, char **argv)
{
	int c = ft_strcmp(argv[1], argv[2]);
	if (argc == 3)
		printf("%d,\n", c);
	return(0);;
}
