/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpalfi <zpalfi@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:17:00 by zpalfi            #+#    #+#             */
/*   Updated: 2022/03/24 15:03:24 by zpalfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_atoi(const char *str)
{
	int				count;
	long long int	aux;

	count = 1;
	aux = 0;
	while (*str && (*str == ' ' || *str == '\f' || *str == '\n'
			|| *str == '\r' || *str == '\t' || *str == '\v'))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			count = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		aux = (aux * 10) + (*str - '0');
		str++;
	}	
	aux = aux * count;
	return (aux);
}
