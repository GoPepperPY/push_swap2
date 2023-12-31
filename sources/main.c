/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:18:14 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/27 15:39:26 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int counter, char **argument)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		counter_two;

	counter_two = 0;
	if (counter > 1)
	{
		while (argument[++counter_two])
		{
			if (ft_isdigit_2(argument[counter_two]) == 0 || (ft_atoi(argument \
			[counter_two]) > 2147483647) || (ft_atoi(argument[counter_two]) < -2147483648))
			{
				ft_printf("Error");
				return (0);
			}
		}
		fill_stack_a(&stack_a, &stack_b, argument, counter);
		if (checker(&stack_a) == 1)
			sort(&stack_a, &stack_b);
		free_all(&stack_a, &stack_b);
	}
	return (0);
}
