/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:42:26 by iusantos          #+#    #+#             */
/*   Updated: 2023/04/28 10:27:10 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src) + 1;
	dest = malloc(size);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
