/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:31:44 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/11 15:35:18 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	temporary;
	int	temporary_two;
	int	counter;

	temporary = stack_a->stack[0];
	temporary_two = stack_a->index[0];
	counter = -1;
	while (++counter < stack_a->size)
	{
		stack_a->stack[counter] = stack_a->stack[counter + 1];
		stack_a->index[counter] = stack_a->index[counter + 1];
	}
	stack_a->size--;
	stack_b->size++;
	counter = stack_b->size;
	while (--counter > 0)
	{
		stack_b->stack[counter] = stack_b->stack[counter - 1];
		stack_b->index[counter] = stack_b->index[counter - 1];
	}
	stack_b->stack[0] = temporary;
	stack_b->index[0] = temporary_two;
	ft_printf("pb\n");
}

void	pa(t_stack *stack_b, t_stack *stack_a)
{
	int	temporary;
	int	temporary_two;
	int	counter;

	temporary = stack_a->stack[0];
	temporary_two = stack_a->index[0];
	counter = -1;
	while (++counter < stack_a->size)
	{
		stack_a->stack[counter] = stack_a->stack[counter + 1];
		stack_a->index[counter] = stack_a->index[counter + 1];
	}
	stack_a->size--;
	stack_b->size++;
	counter = stack_b->size;
	while (--counter > 0)
	{
		stack_b->stack[counter] = stack_b->stack[counter - 1];
		stack_b->index[counter] = stack_b->index[counter - 1];
	}
	stack_b->stack[0] = temporary;
	stack_b->index[0] = temporary_two;
	ft_printf("pa\n");
}
