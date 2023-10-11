/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:04 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/11 15:28:53 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sa(t_stack *stack_a)
{
	int	temporary;
	int	temporary_two;

	temporary = stack_a->stack[1];
	temporary_two = stack_a->index[1];
	stack_a->stack[1] = stack_a->stack[0];
	stack_a->index[1] = stack_a->index[0];
	stack_a->stack[0] = temporary;
	stack_a->index[0] = temporary_two;
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	int	temporary;
	int	temporary_two;

	temporary = stack_b->stack[1];
	temporary_two = stack_b->index[1];
	stack_b->stack[1] = stack_b->stack[0];
	stack_b->index[1] = stack_b->index[0];
	stack_b->stack[0] = temporary;
	stack_b->index[0] = temporary_two;
	ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}
