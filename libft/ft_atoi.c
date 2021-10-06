/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:01:23 by allopez           #+#    #+#             */
/*   Updated: 2021/10/06 16:33:25 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		x;
	int		neg;
	int		result;

	x = 0;
	neg = 0;
	result = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == ' ')
		x++;
	if (str[x] == '-')
		neg = 1;
	if (str[x] == '+' || str[x] == '-')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = (str[x] - '0' + result * 10);
		x++;
	}
	if (neg == 1)
		return (-result);
	else
		return (result);
}
