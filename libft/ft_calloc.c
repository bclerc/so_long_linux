/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:01:44 by allopez           #+#    #+#             */
/*   Updated: 2021/10/06 16:33:26 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	tab = (char *)malloc(nmemb * size);
	if (!tab)
		return (NULL);
	return (ft_memset(tab, 0, nmemb * size));
}
