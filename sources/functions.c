/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:19:18 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/27 18:29:06 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

long ft_atoi(char *nptr)
{
	int		counter;
	int		saver;
	long	rest;

	rest = 0;
	saver = 1;
	counter = 0;
	while (nptr[counter] == 32 || (nptr[counter] >= 9 && nptr[counter] <= 13))
		counter++;
	if (nptr[counter] == '-')
	{
		saver = -1;
		counter++;
	}
	else if (nptr[counter] == '+')
		counter++;
	while (nptr[counter] >= '0' && nptr[counter] <= '9')
	{
		rest = (nptr[counter] - 48) + (rest * 10);
		counter++;
	}
	return (rest * saver);
}

void	order_the_array(t_stack *substitute)
{
	int	counter;
	int	temporary;

	counter = 0;
	while (counter < substitute->size)
	{
		if (substitute->stack[counter] > substitute->stack[counter + 1] \
		&& counter < substitute->size - 1)
		{
			temporary = substitute->stack[counter];
			substitute->stack[counter] = substitute->stack[counter + 1];
			substitute->stack[counter + 1] = temporary;
			counter = -1;
		}
		counter++;
	}
	counter = -1;
	while (++counter < substitute->size)
		substitute->index[counter] = counter + 1;
}

void	give_the_index(t_stack *stack, t_stack *substitute)
{
	int	counter_one;
	int	counter_two;

	counter_one = -1;
	while (++counter_one < stack->size)
	{
		counter_two = -1;
		while (++counter_two < stack->size)
		{
			if (substitute->stack[counter_two] == stack->stack[counter_one])
				stack->index[counter_one] = substitute->index[counter_two];
		}
	}
}

void	fill_stack_a_two(t_stack *a, char **arguments, t_stack *substitute)
{
	int		number;
	int		counter_one;
	int		counter_two;

	counter_one = 1;
	number = 0;
	counter_two = 0;
	while (counter_one <= a->size)
	{
		number = ft_atoi(arguments[counter_one]);
		a->stack[counter_two] = number;
		counter_one++;
		counter_two++;
	}
	counter_one = 1;
	counter_two = 0;
	while (counter_one <= a->size)
	{
		number = ft_atoi(arguments[counter_one]);
		substitute->stack[counter_two] = number;
		counter_one++;
		counter_two++;
	}
	order_the_array(substitute);
	give_the_index(a, substitute);
}

void	fill_stack_a(t_stack *a, t_stack *b, char **arguments, int counter)
{
	t_stack	substitute;

	a->stack = ft_calloc(counter, sizeof(int));
	a->index = ft_calloc(counter, sizeof(int));
	b->stack = ft_calloc(counter, sizeof(int));
	b->index = ft_calloc(counter, sizeof(int));
	substitute.stack = ft_calloc(counter, sizeof(int));
	substitute.index = ft_calloc(counter, sizeof(int));
	a->size = counter - 1;
	substitute.size = a->size;
	b->size = 0;
	fill_stack_a_two(a, arguments, &substitute);
	free(substitute.stack);
	free(substitute.index);
}
