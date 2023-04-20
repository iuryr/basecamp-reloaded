/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:34:43 by iusantos          #+#    #+#             */
/*   Updated: 2023/04/20 13:04:44 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	sup_limit;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	sup_limit = INT_MAX / nb;
	factorial = 1;
	i = 2;
	while (i <= nb)
	{
		if (factorial > sup_limit)
			return (0);
		factorial *= i;
		i++;
	}
	return (factorial);
}
