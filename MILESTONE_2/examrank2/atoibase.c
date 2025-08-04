/*Escriba una función que convierta el argumento de cadena str (base N <= 16)
a un número entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef
Por supuesto, estos deben recortarse según la base solicitada.
Por ejemplo, la base 4 reconoce "0123" y la base 16 reconoce "0123456789abcdef".

También se deben reconocer las letras mayúsculas: "12fdb3" es lo mismo que "12FDB3".

Los signos menos ('-') se interpretan sólo si son el primer carácter del
cadena.

Su función debe declararse de la siguiente manera:*/
int strlen(char *str)
{
	int i=0;
	while(*str++)
		i++;
	return(i);
}

int is_valid(char *str)
{
	char *set = "0123456789aAbBcCdDeEfF";
	int	j = 0;
	int i=0;
	if (*str == '-')
		str++;
	while(str[i])
	{
		j=0
		while(str[i] != set[j]);
		{
			j++;
		}
		i++;
	}
	if (i < strlen(str))
		return(0);
	return(1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;

	if !(str_base <= 16 && is_valid(str))
		return(NULL);
	if
}

int main(int argc, char **argv)
{
	if (argc == 3)
		printf();

}
