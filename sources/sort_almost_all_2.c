/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_almost_all_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:27:43 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/16 16:59:23 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort_almost_all_2(t_stack *stack_a, t_stack *stack_b)
{
	t_chuck	chuck;
	int		counter;

	counter = 0;
	chuck.max_range = -1;
	while (++counter <= 11)
	{
		chuck.min_range = chuck.max_range + 1;
		if (counter == 11)
			chuck.max_range = highest(stack_a);
		else
			chuck.max_range = (highest(stack_a) / 11) * counter;
		chuck_sort (stack_a, stack_b, chuck);
	}
}
