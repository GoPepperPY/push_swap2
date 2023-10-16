/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:18:14 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/16 17:36:44 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int counter, char **argument)
{
	t_stack	stack_a;
	t_stack	stack_b;

	fill_stack_a(&stack_a, &stack_b, argument, counter);
	if (checker(&stack_a) == 1)
		sort(&stack_a, &stack_b);
	free_all(&stack_a, &stack_b);
	return (0);
}
