/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:26:22 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/16 17:26:49 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	highest(t_stack *stack_a)
{
	int	counter;
	int	number;

	counter = 0;
	number = stack_a->index[0];
	while (stack_a->index[counter])
	{
		if (number < stack_a->index[counter])
			number = stack_a->index[counter];
		counter++;
	}
	return (number);
}

int	lowest(t_stack *stack_a)
{
	int	counter;
	int	number;

	counter = 0;
	number = stack_a->index[0];
	while (stack_a->index[++counter])
		if (number > stack_a->index[counter])
			number = stack_a->index[counter];
	return (number);
}

void	passing_b(t_stack *stack_a, t_stack *stack_b, int a, int b)
{
	int	counter;

	counter = 0;
	while (1)
	{
		if (stack_a->index[0] == a || stack_a->index[0] == b)
		{
			pb(stack_a, stack_b);
			counter++;
			if (counter == 2)
				break ;
		}
		else
			ra(stack_a);
	}
	if (stack_b->index[0] < stack_b->index[1])
		rb(stack_b);
}

void	sort_five_numbers(t_stack *stack_a, t_stack *stack_b)
{
	int	l;
	int	h;

	l = lowest(stack_a);
	h = highest(stack_a);
	passing_b(stack_a, stack_b, l, h);
	sort_three_numbers(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
	pa(stack_a, stack_b);
}
