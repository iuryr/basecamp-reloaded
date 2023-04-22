/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:27:38 by iusantos          #+#    #+#             */
/*   Updated: 2023/04/22 10:34:54 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	else
	{
		i = 0;
		output = malloc(size * 4);
		while (i < size)
		{
			output[i] = min + i;
			i++;
		}
		return (output);
	}
}
