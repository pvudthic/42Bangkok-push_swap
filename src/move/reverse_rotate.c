#include "libft.h"
#include "stack.h"
#include "move.h"
#include "free_mem.h"

void	do_rra(t_list *stack)
{
	t_stack	*prev;
	t_stack	*current;

	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	current = stack->a;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = stack->a;
	prev->next = NULL;
	stack->bottom_a = prev;
	stack->a = current;
	stack->top_a = stack->a;
	if (ft_printf("rra\n") == -1)
		error_exit(stack);
}

void	do_rrb(t_list *stack)
{
	t_stack	*prev;
	t_stack	*current;

	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	current = stack->b;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = stack->b;
	prev->next = NULL;
	stack->bottom_b = prev;
	stack->b = current;
	stack->top_b = stack->b;
	if (ft_printf("rrb\n") == -1)
		error_exit(stack);
}

static void	rra(t_list *stack)
{
	t_stack	*prev;
	t_stack	*current;

	if (stack->a == NULL || stack->a->next == NULL)
		return ;
	current = stack->a;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = stack->a;
	prev->next = NULL;
	stack->bottom_a = prev;
	stack->a = current;
	stack->top_a = stack->a;
}

static void	rrb(t_list *stack)
{
	t_stack	*prev;
	t_stack	*current;

	if (stack->b == NULL || stack->b->next == NULL)
		return ;
	current = stack->b;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = stack->b;
	prev->next = NULL;
	stack->bottom_b = prev;
	stack->b = current;
	stack->top_b = stack->b;
}

void	do_rrr(t_list *stack)
{
	rra(stack);
	rrb(stack);
	if (ft_printf("rrr\n") == -1)
		error_exit(stack);
}
