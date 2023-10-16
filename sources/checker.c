/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:12:24 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/16 17:35:54 by goda-sil         ###   ########.fr       */
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
				return (0);
			counter_two++;
		}
		counter_one++;
	}
	return (1);
}

void	free_all(t_stack *a, t_stack *b)
{
	free(a);
	free(b);
}