/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:14:25 by goda-sil          #+#    #+#             */
/*   Updated: 2023/09/27 12:27:24 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort_four_numbers(t_stack *stack_a, t_stack *stack_b)
{
	int	counter;

	counter = 0;
	while (stack_a->stack[counter])
	{
		if (stack_a->stack[counter] == lowest(stack_a))
		{
			pb(stack_a, stack_b);
			break ;
		}
		ra(stack_a);
	}
	sort_three_numbers(stack_a);
	pa(stack_a, stack_b);
}
