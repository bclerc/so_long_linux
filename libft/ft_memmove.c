/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:04:26 by allopez           #+#    #+#             */
/*   Updated: 2021/10/06 16:33:42 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if ((unsigned char *)src < (unsigned char *)dest)
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
