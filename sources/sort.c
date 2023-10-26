/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:12:49 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/26 12:15:42 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size == 2)
	{
		if (stack_a->stack[1] < stack_a->stack[0])
			ra(stack_a);
	}
	if (stack_a->size == 3)
		sort_three_numbers(stack_a);
	if (stack_a->size == 5)
		sort_five_numbers(stack_a, stack_b);
	if (stack_a->size == 4)
		sort_four_numbers(stack_a, stack_b);
	if (stack_a->size > 5 && stack_a->size <= 350)
	{
		sort_almost_all(stack_a, stack_b);
		organize(stack_a, stack_b);
	}
	else if (stack_a->size > 350)
	{
		sort_almost_all_2(stack_a, stack_b);
		organize(stack_a, stack_b);
	}
}
