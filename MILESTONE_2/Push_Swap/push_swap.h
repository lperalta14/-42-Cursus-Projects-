
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node  *next;
}	t_node;

t_node	**ft_get_arguments(int argc, char **argv);
int		ft_checkervalids(char **args);
int		ft_valid_digit(char *str);
void	pushswap(t_node **stack_a);
void	ft_free_stack(t_node **stack);
void	ft_free_split(char **split);
void	ft_error(char **split, t_node stack);

#endif
