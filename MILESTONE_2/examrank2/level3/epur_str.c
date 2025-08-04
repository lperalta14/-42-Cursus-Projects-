/*Escriba un programa que tome una cadena y muestre esta cadena con exactamente 
un espacio entre palabras, sin espacios ni tabulaciones ni al principio ni al 
final, seguido de \n.

Una "palabra" se define como parte de una cadena delimitada por espacios/
tabulaciones, o por el inicio/final de la cadena.

Si el número de argumentos no es 1, o si no hay palabras para mostrar, el
El programa muestra \n.
Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/

#include <unistd.h>

int ft_isspace(char c)
{
	if(c > 0 && c <= 32)
		return (1);
	return (0);
}
int ft_islower(char c)
{
	if (c > 96 && c < 123)
		return(1);
	return(0);
}
int ft_isupper(char c)
{
	if (c >  64 && c < 91)
		return(1);
	return(0);
}
int ft_isalpha(char c)
{
	return(ft_isupper(c) || ft_islower(c));
}
void	epur_str(char *str)
{
	int i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i])
	{
		if (ft_islower(str[i]) && (i == 0 || ft_isspace(str[i - 1])))
			str[i] -= 32;
		if (ft_isupper(str[i]) && !ft_isspace(str[i - 1]))
			str[i] += 32;
		if (!ft_isspace(str[i]))
			write(1, &str[i], 1);
		if (ft_isspace(str[i]) && str[i + 1] && !ft_isspace(str[i + 1]))
			write(1, " ", 1);	
		i++ ;
	}
}

/*
	while (*str)
	{
		if (spaced = 1;)
			write(1, " ", 1);
		while(*str == ' ' || *str == '\t')
			str++;
		while((*str != ' ' && *str == '\t') && *str)
		{
			write(1, str, 1);
			str++;
		}
		spaced = 1;
	}
	while()
}*/
int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return(0);
}

