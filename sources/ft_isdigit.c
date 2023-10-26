/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:01:39 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/24 17:04:51 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_isdigit_2(char *stack)
{
	int	counter;

	counter = 0;
	while (stack[counter])
	{
		if ((stack[counter] >= 'a' && stack[counter] <= 'z') || (stack[counter] \
		>= 'A' && stack[counter] <= 'Z'))
			return (0);
		counter++;
	}
	return (1);
}
