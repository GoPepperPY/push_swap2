/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chuck_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:36:14 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/16 16:39:38 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	push_above(t_stack *a, t_stack *b, int value)
{
	while (a->index[0] != value)
		ra(a);
	pb(a, b);
}

void	push_below(t_stack *a, t_stack *b, int value)
{
	while (a->index[0] != value)
		rra(a);
	pb(a, b);
}

int	numbers_of_chuck(t_stack *stack_a, t_chuck chuck)
{
	int	counter;

	counter = -1;
	while (stack_a->index[++counter])
	{
		if ((stack_a->index[counter] >= chuck.min_range && chuck.max_range >= \
		stack_a->index[counter]))
			return (1);
	}
	return (0);
}

void	chuck_sort(t_stack *stack_a, t_stack *stack_b, t_chuck chuck)
{
	int	middle;
	int	above;
	int	below;
	int	counter;

	while (numbers_of_chuck(stack_a, chuck) == 1)
	{
		above = 0;
		below = 0;
		counter = 0;
		middle = stack_a->size / 2;
		while (!(stack_a->index[counter] >= chuck.min_range && \
		chuck.max_range >= stack_a->index[counter]) && !(counter == middle))
			counter++;
		above = counter;
		counter = stack_a->size - 1;
		while (!(stack_a->index[counter] >= chuck.min_range && \
		chuck.max_range >= stack_a->index[counter]) && !(counter == middle))
			counter--;
		below = counter;
		if (stack_a->size - below > above)
			push_above(stack_a, stack_b, stack_a->index[above]);
		else
			push_below(stack_a, stack_b, stack_a->index[below]);
	}
}
