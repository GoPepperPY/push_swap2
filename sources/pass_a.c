/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:46:16 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/11 17:36:09 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	highest_range(t_stack *stack)
{
	int	counter;
	int	value;
	int	position;

	counter = 0;
	value = 0;
	position = 0;
	while (stack->index[counter])
	{
		if (stack->index[counter] > value)
		{
			value = stack->index[counter];
			position = counter;
		}
		counter++;
	}
	return (position);
}

void	organize(t_stack *stack_a, t_stack *stack_b)
{
	int	highest_number_position;
	int	temporary;

	while (stack_b->size > 0)
	{
		highest_number_position = highest_range(stack_b);
		temporary = stack_b->index[highest_number_position];
		if (highest_number_position <= stack_b->size / 2)
		{
			while (1)
			{
				if (stack_b->index[0] == temporary)
					break ;
				rb(stack_b);
			}
		}
		else 
		{
			while (1)
			{
				if (stack_b->index[0] == temporary)
					break ;
				rrb(stack_b);
			}
		}
		pa(stack_a, stack_b);
	}
}
