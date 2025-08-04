/*Escriba un programa que tome dos cadenas y verifique si es posible
escribir la primera cadena con caracteres de la segunda cadena, respetando
el orden en que aparecen estos caracteres en la segunda cadena.

Si es posible, el programa muestra la cadena, seguida de \n, de lo contrario
simplemente muestra un \n.

Si el número de argumentos no es 2, el programa muestra un \n.
Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

#include <unistd.h>
void	putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
int ft_strcmp(char *str1, char *str2)
{
	char	*str = str1;
	while(*str && *str2)
	{
		if(*str == *str2)
			str++;
		str2++;
	}
	return(!*str);
}
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_strcmp(argv[1], argv[2]))
				putstr(argv[1]);
	}
	
	write(1, "\n", 1);
	return(0);
}
