/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:01:11 by allopez           #+#    #+#             */
/*   Updated: 2021/10/06 15:45:33 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	error(char *message)
{
	printf("Error : %s\n", message);
	return (0);
}

void	*null_error(char *message)
{
	printf("Error : %s\n", message);
	return (0);
}

void	print_warning(char *message)
{
	printf("Warning : %s\n", message);
}
