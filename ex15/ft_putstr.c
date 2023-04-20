/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:21:51 by iusantos          #+#    #+#             */
/*   Updated: 2023/04/20 13:31:24 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;	
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
