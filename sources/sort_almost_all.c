/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_almost_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:40:48 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/11 16:41:49 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort_almost_all(t_stack *stack_a, t_stack *stack_b)
{
	t_chuck	chuck_one;
	t_chuck	chuck_two;
	t_chuck	chuck_three;
	t_chuck	chuck_four;
	t_chuck	chuck_five;

	chuck_one.min_range = 0;
	chuck_one.max_range = highest(stack_a) / 5 - 1;
	chuck_two.min_range = highest(stack_a) / 5;
	chuck_two.max_range = (highest(stack_a) / 5) * 2;
	chuck_three.min_range = chuck_two.max_range + 1;
	chuck_three.max_range = (highest(stack_a) / 5) * 3;
	chuck_four.min_range = chuck_three.max_range + 1;
	chuck_four.max_range = (highest(stack_a) / 5) * 4;
	chuck_five.min_range = chuck_four.max_range + 1;
	chuck_five.max_range = highest(stack_a);
	chuck_sort (stack_a, stack_b, chuck_one);
	chuck_sort (stack_a, stack_b, chuck_two);
	chuck_sort (stack_a, stack_b, chuck_three);
	chuck_sort (stack_a, stack_b, chuck_four);
	chuck_sort (stack_a, stack_b, chuck_five);
}
