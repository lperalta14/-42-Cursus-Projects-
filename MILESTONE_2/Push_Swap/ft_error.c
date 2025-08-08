
#include "push_swap.h"

void	ft_free_stack(t_node **stack)
{
	t_node	*temp;
	t_node	*next;

	if (!stack)
		return ;
	temp = *stack;
	while(temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*stack = NULL;
}
void	ft_free_split(char **split)
{
	int i;
	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	ft_error(char **split, t_node **stack)
{
	write(2, "ERROR\n", 6);
	ft_free_split(split);
	ft_free_stack(stack);
	exit(2);
}