#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	int				value;
	struct s_node  *next;
}	t_node;

t_node	**ft_get_arguments(int argc, char **argv);
int		ft_checkervalids(char **args);
void	pushswap(t_node **stack_a);

#endif
