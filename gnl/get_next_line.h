/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 12:59:10 by allopez           #+#    #+#             */
/*   Updated: 2021/10/06 14:44:35 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 32

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include "../so_long.h"

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);
char	*ft_strjoin(const char *s1, const char *s2);
int		ft_strchr(const char *s, int c);
char	*ft_substr(const char *str, unsigned int start, size_t len);

#endif
