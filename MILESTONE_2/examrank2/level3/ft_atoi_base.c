int	ft_atoi_base(const char *str, int str_base)
{
	if(str_base < 2 || str_base > 16 || !*str)
		return(0);
	char base;
	if(str_base < 11)
		base = (str_base - 1) + 48;
	else
		base = str_base + 'a' -10;

	int res = 0;
	int sign = 1;
	while(*str > 0 && *str < 33)
		str++;
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	while(*str)
	{
		if(*str >= '0' && *str<= '9' && *str <= base)
			res = res * str_base + (*str - 48);
		else if (*str >= 'a' && *str <= 'f' && *str < base)
			res = res * str_base + (*str -'a' + 10);
		else if( *str >= 'A' && *str <= 'F' && *str < (base + 32))
			res = res * str_base + (*str -'A' + 10);
		else 
			break;
		str++;
	}
	res = res * sign;
	return(res);
}

#include<stdio.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	
		printf("%d\n", ft_atoi_base(argv[1], ft_atoi_base(argv[2],10)));
	return(0);
}
