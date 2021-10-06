/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:05:20 by allopez           #+#    #+#             */
/*   Updated: 2021/10/06 16:35:38 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	count;
	size_t	s1_size;
	char	*tab;

	count = -1;
	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	tab = (char *)malloc((s1_size + ft_strlen(s2) + 1) * sizeof(char));
	if (!(tab))
		return (NULL);
	while (s1[++count])
		tab[count] = s1[count];
	count = -1;
	while (s2[++count])
		tab[s1_size + count] = s2[count];
	tab[s1_size + count] = '\0';
	return (tab);
}
