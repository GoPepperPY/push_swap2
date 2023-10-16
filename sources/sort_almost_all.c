/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_almost_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:40:48 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/16 17:18:03 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort_almost_all(t_stack *stack_a, t_stack *stack_b)
{
	t_chuck	chuck;
	int		counter;

	counter = 0;
	chuck.max_range = -1;
	while (++counter <= 5)
	{
		chuck.min_range = chuck.max_range + 1;
		if (counter == 5)
			chuck.max_range = highest(stack_a);
		else
			chuck.max_range = (highest(stack_a) / 5) * counter;
		chuck_sort (stack_a, stack_b, chuck);
	}
}
