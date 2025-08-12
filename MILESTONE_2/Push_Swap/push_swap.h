
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdarg.h>
# include <stdlib.h>
# include "my_lib/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_node	*next;
}	t_node;

t_node	*ft_get_arguments(int argc, char **argv);
t_node	*ft_new_node(int num);
t_node	*ft_lstlast_node(t_node *lst);
void	ft_getnode(t_node **stack, char **split);
void	ft_checkervalids(char **args);
int		ft_valid_digit(char *str);
void	pushswap(t_node **stack_a);
void	ft_free_stack(t_node **stack);
void	ft_free_split(char **split);
void	ft_error(char **split, t_node **stack);
void	ft_check_dups(t_node *stack);

#endif
