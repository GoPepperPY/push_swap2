/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:55:25 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:32 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ra(t_stack *stack_a)
{
	int	counter;
	int	temporary;
	int	temporary_two;

	counter = 0;
	temporary = stack_a->stack[counter];
	temporary_two = stack_a->index[counter];
	while (counter < stack_a->size - 1)
	{
		stack_a->stack[counter] = stack_a->stack[counter + 1];
		stack_a->index[counter] = stack_a->index[counter + 1];
		counter++;
	}
	stack_a->stack[counter] = temporary;
	stack_a->index[counter] = temporary_two;
	ft_printf("ra\n");
}

void	rb(t_stack *stack_b)
{
	int	counter;
	int	temporary;
	int	temporary_two;

	counter = 0;
	temporary = stack_b->stack[counter];
	temporary_two = stack_b->index[counter];
	while (counter < stack_b->size - 1)
	{
		stack_b->stack[counter] = stack_b->stack[counter + 1];
		stack_b->index[counter] = stack_b->index[counter + 1];
		counter++;
	}
	stack_b->stack[counter] = temporary;
	stack_b->index[counter] = temporary_two;
	ft_printf("rb\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}
