#include <stdlib.h>
#include <stdio.h>

char **split(char *str)
{
	int		i=0;
	char	*start;
	char	**word;

	while(*str)
	{
		while(*str < 33)
			str++;
		if(!str)
			break;
		start = str;
		while(*str > 33)
			str++;
		word[i] = malloc(str - start + 1);
		if (!word)
			return(NULL);
		int j = 0;
		while (start < str)
		{
			word[i][j] = *start++;
			j++;
		}
		word[i][j] = 0;
		i++;
	}
	word[i] = 0;
	return(word);
}


int main(int argc, char **argv)
{
	printf("%s", plit(argv[1]));
	return(0);
}
