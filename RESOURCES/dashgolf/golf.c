/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   golf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:59:18 by lperalta          #+#    #+#             */
/*   Updated: 2025/05/22 13:20:55 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_sumrest(s)
{
	int		i;
	int		result;

	i = 0;
	result = s[i];
	i++;
	while (s[i] == '+' || s[i] == '-')
	{
		if(s[i] == '+')
			i++;
			result += s[i];
		else if (s[i] == '-')
			i++;
			result -= *s;
	}
	return  (result);
}
int ft_divmult(*s)
{
	int		i;
	int		result;

	i = 0;
	result = s[i];
	i++;
	while (s[i] == '*' || s[i] == '/')
	{
		if(s[i] == '*')
			i++;
			result *= s[i];
		else if (s[i] == '/')
			i++;
			result /= *s;
	}
	return  (result);
}

int	ft_golferrors(s)
{
	char	*sse;
	int 	o;
	while(*s)
	{
		if ((*s == ' ') && (s[1] || s[1] =! ' '))
			return(NULL);
		if (isalpha(*s))
			return (NULL);
		if (*s > 41 && *s < 48) && (s[2] > 41 && s[2] < 48)
			return(NULL);
		while (*s)
		{
			if (*s != isspace(s))
				*sse++ = *s++;
			s++;
		}
		s = sse;
		*s = '\0';
	}
}
