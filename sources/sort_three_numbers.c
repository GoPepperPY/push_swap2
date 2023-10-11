/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:23:23 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/04 16:17:59 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort_three_numbers(t_stack *stack_a)
{
	if (stack_a->stack[0] > stack_a->stack[1] \
	&& stack_a->stack[0] < stack_a->stack[2])
		sa(stack_a);
	if (stack_a->stack[0] > stack_a->stack[1] \
	&& stack_a->stack[1] > stack_a->stack[2] \
	&& stack_a->stack[0] > stack_a->stack[2])
	{
		sa (stack_a);
		rra (stack_a);
	}
	if (stack_a->stack[0] > stack_a->stack[1] \
	&& stack_a->stack[1] < stack_a->stack[2] \
	&& stack_a->stack[2] < stack_a->stack[0])
		ra(stack_a);
	if (stack_a->stack[0] < stack_a->stack[1] \
	&& stack_a->stack[2] < stack_a->stack[1] \
	&& stack_a->stack[2] > stack_a->stack[0])
	{
		sa(stack_a);
		ra(stack_a);
	}
	if (stack_a->stack[0] < stack_a->stack[1] \
	&& stack_a->stack[1] > stack_a->stack[2] \
	&& stack_a->stack[2] < stack_a->stack[0])
		rra(stack_a);
}
