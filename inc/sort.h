#ifndef SORT_H
# define SORT_H

# include "stack.h"
# include "push_swap.h"

void	sort(t_list *stack);
void	easy_sort(t_list *stack, int start, int pivot);
void	base_sort_new(t_list *stack, int size, int position);
void	create_rank(t_list *stack);
void	sort3_easy(t_list *stack);
void	sort4_5_easy(t_list *stack);
int		range_size(t_stack *stack, int max_range);
int		find_next(t_stack *marker);
int		find_prev(t_stack *ref, t_stack *marker);
int		minimum(t_stack *ref, int size);
t_stack	*shift_start(t_stack *ref, int start);
int		find_pivot(t_stack *ref, int start);
int		find_start(t_stack *ref, int pivot);
int		find_sort_size(t_stack *ref, int start, int pivot);
void	move_1_to_(t_list *stack, int max_range, int des);
void	move_2_to_(t_list *stack, int max_range, int des);
void	move_3_to_(t_list *stack, int max_range, int des);
void	move_4_to_(t_list *stack, int max_range, int des);
void	partition_pos1(t_list *stack, int size, int max_range);
void	partition_pos2(t_list *stack, int size, int max_range);
void	partition_pos3(t_list *stack, int size, int max_range);
void	partition_pos4(t_list *stack, int size, int max_range);
void	first_partition(t_list *stack);
void	sort3_position_1(t_list *stack);
void	sort3_position_2(t_list *stack);
void	sort3_position_3(t_list *stack);
void	sort3_position_4(t_list *stack);
void	assign_lane(t_list *stack, int *top, int *mid, int *bot);
void	compare_swap(t_list *ref, int postition);
size_t	ft_strlen(const char *s);

#endif
