/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:26:22 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/11 15:32:38 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	rra(t_stack *stack_a)
{
	int	counter;
	int	temporary;
	int	temporary_two;

	counter = stack_a->size - 1;
	temporary = stack_a->stack[counter];
	temporary_two = stack_a->index[counter];
	while (counter > 0)
	{
		stack_a->stack[counter] = stack_a->stack[counter - 1];
		stack_a->index[counter] = stack_a->index[counter - 1];
		counter--;
	}
	stack_a->stack[counter] = temporary;
	stack_a->index[counter] = temporary_two;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack_b)
{
	int	counter;
	int	temporary;
	int	temporary_two;

	counter = stack_b->size - 1;
	temporary = stack_b->stack[counter];
	temporary_two = stack_b->index[counter];
	while (counter > 0)
	{
		stack_b->stack[counter] = stack_b->stack[counter - 1];
		stack_b->index[counter] = stack_b->index[counter - 1];
		counter--;
	}
	stack_b->stack[counter] = temporary;
	stack_b->index[counter] = temporary_two;
	ft_printf("rrb\n");
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_printf("rrr\n");
}
