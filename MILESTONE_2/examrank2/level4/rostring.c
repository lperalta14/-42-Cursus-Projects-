/*Escriba un programa que tome una cadena y la muestre después de rotarla
una palabra a la izquierda.

Así, la primera palabra pasa a ser la última y las demás permanecen en el mismo orden.

Una "palabra" se define como parte de una cadena delimitada por espacios/tabulaciones, o
por el inicio/final de la cadena.

Las palabras estarán separadas por un solo espacio en la salida.

Si hay menos de un argumento, el programa muestra \n.

Ejemplo:

$>./rostring "abc " | cat -e
abc$
$>
$>./rostring "Que la lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring " AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/
#include<unistd.h>
int	ft_isspace(char c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}

void rostring(char *str)
{
	int i = 0;
	int j = 0;
	while(*str && ft_isspace(*str))
		str++;
	while(str[i] && !ft_isspace(str[i]))
		i++;
	while(str[i] && ft_isspace(str[i]))
		i++;
	while(str[i])
	{
		if(!ft_isspace(str[i]))
			write(1, &str[i], 1);
		if(ft_isspace(str[i]) && str[i+1] && !ft_isspace(str[i+1]))
			write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
	while(!ft_isspace(str[j]))
	{
		write(1, &str[j], 1);
		j++
			i++;;
	}
	
}	
int main(int argc, char **argv)
{
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return(0);
}


