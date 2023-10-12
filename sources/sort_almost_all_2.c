/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_almost_all_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:27:43 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/12 17:22:24 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	sort_almost_all_2(t_stack *stack_a, t_stack *stack_b)
{
	t_chuck	chuck_one;
	t_chuck	chuck_two;

	chuck_one.min_range = 0;
	chuck_one.max_range = highest(stack_a) / 2 - 1;
	chuck_two.min_range = highest(stack_a) / 2;
	chuck_two.max_range = highest(stack_a);
	chuck_sort (stack_a, stack_b, chuck_one);
	chuck_sort (stack_a, stack_b, chuck_two);
}