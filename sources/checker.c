/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:12:24 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/26 11:41:30 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	checker(t_stack *stack_a)
{
	int	counter_one;
	int	counter_two;

	counter_one = 0;
	while (stack_a->stack[counter_one])
	{
		counter_two = 0;
		while (stack_a->stack[counter_two])
		{
			if ((stack_a->stack[counter_one] == stack_a->stack[counter_two]) && \
			(counter_one != counter_two))
			{
				ft_printf("Error");
				return (0);
			}
			counter_two++;
		}
		counter_one++;
	}
	if (checker_2(stack_a) == 1)
		return (1);
	return (0);
}

int	checker_2(t_stack *a)
{
	int	counter;

	counter = 0;
	while (a->stack[counter] < a->stack[counter + 1] && counter <= a->size)
		counter++;
	if (counter == a->size - 1)
		return (0);
	return (1);
}

void	free_all(t_stack *a, t_stack *b)
{
	free(a->stack);
	free(b->stack);
	free(a->index);
	free(b->index);
}
