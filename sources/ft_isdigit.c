/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:01:39 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/26 17:20:58 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_isdigit_2(char *stack)
{
	int	counter;

	counter = 0;
	while (stack[counter])
	{
		if (!(stack[counter] >= 48 && stack[counter] <= 57))
			return (0);
		counter++;
	}
	return (1);
}
