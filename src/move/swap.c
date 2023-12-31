#include "libft.h"
#include "stack.h"
#include "move.h"
#include "free_mem.h"

void	do_sa(t_list *stack)
{
	int	tmp;

	if (stack->a && stack->a->next)
	{
		tmp = stack->a->next->nb;
		stack->a->next->nb = stack->a->nb;
		stack->a->nb = tmp;
		if (ft_printf("sa\n") == -1)
			error_exit(stack);
		stack->top_a = stack->a;
		if (stack->size_a == 2)
			stack->bottom_a = stack->a->next;
	}
	else
		return ;
}

void	do_sb(t_list *stack)
{
	int	tmp;

	if (stack->b && stack->b->next)
	{
		tmp = stack->b->next->nb;
		stack->b->next->nb = stack->b->nb;
		stack->b->nb = tmp;
		if (ft_printf("sb\n") == -1)
			error_exit(stack);
		stack->top_b = stack->b;
		if (stack->size_b == 2)
			stack->bottom_b = stack->b->next;
	}
	else
		return ;
}

void	do_ss(t_list *stack)
{
	int	tmp;

	if (stack)
	{
		if (stack->a && stack->a->next)
		{
			tmp = stack->a->next->nb;
			stack->a->next->nb = stack->a->nb;
			stack->a->nb = tmp;
		}
		if (stack->b && stack->b->next)
		{
			tmp = stack->b->next->nb;
			stack->b->next->nb = stack->b->nb;
			stack->b->nb = tmp;
		}
		stack->top_a = stack->a;
		stack->top_b = stack->b;
		if (ft_printf("ss\n") == -1)
			error_exit(stack);
	}
	else
		return ;
}
