/*Escriba un programa que tome una cadena como parámetro e imprima sus palabras en
orden inverso.

Una "palabra" es una parte de la cadena delimitada por espacios y/o tabulaciones, o la
inicio/final de la cadena.

Si el número de parámetros es diferente de 1, el programa mostrará
'\n'.

En los parámetros que se van a probar no habrá ningún parámetro "adicional"
espacios (lo que significa que no habrá espacios adicionales al principio o al final).
al final de la cadena, y las palabras siempre estarán separadas exactamente por un espacio.

Ejemplos:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>*/

#include<unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(*str++)
		i++;
	return(i);
}

void	ft_revputstr(char *str, int i)
{
	while(--i)
		write(1, &str[i], 1);
}

int	ft_isspace(char c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}

void	rev_wstr(char *str)
{
	int i = 0;
	char	*word;
	int len = ft_strlen(str);
	while(--len)
	{
		if(!ft_isspace(str[len])) 
			word[i++]=str[len];
		if(ft_isspace(str[len]))
		   ft_revputstr(word, i);	
		if(&str[len] == str)
			write(1, "\n", 1);
	}
	

}

int main(int argc, char **argv)
{
	if(argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return(0);
}


