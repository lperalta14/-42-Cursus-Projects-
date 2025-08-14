
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

typedef	struct s_stack
{
	t_node			**stack;
	int				size;
}	t_stack;

void	ft_get_arguments(int argc, char **argv, t_stack *stack_a);
t_node	*ft_new_node(int num);
t_node	*ft_lstlast_node(t_node *lst);
void	ft_getnode(t_stack *stack_a, char **split);
void	ft_checkervalids(char **args);
int		ft_valid_digit(char *str);
void	ft_pushswap(t_stack *stack_a);
void	ft_free_stack(t_stack *stack);
void	ft_free_split(char **split);
void	ft_error(char **split, t_stack *stack);
void	ft_check_dups(t_stack *stack);

void	ft_swap(t_node **stack);
void	ft_swapa(t_node **stack_a);
void	ft_swapb(t_node **stack_b);
void	ft_swapab(t_node **stack_a, t_node **stack_b);

void	ft_push(t_node **dst, t_node **src);
void	ft_pusha(t_node **dst, t_node **src);
void	ft_pushb(t_node **dst, t_node **src);

void	ft_rotate(t_node **stack);
void	ft_rotatea(t_node **stack_a);
void	ft_rotateb(t_node **stack_b);
void	ft_rotateab(t_node **stack_a, t_node **stack_b);

void	ft_reverse_rotate(t_node **stack);
void	ft_reverse_rotatea(t_node **stack_a);
void	ft_reverse_rotateb(t_node **stack_b);
void	ft_reverse_rotateab(t_node **stack_a, t_node **stack_b);

#endif
