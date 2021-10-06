/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_generator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:01:35 by allopez           #+#    #+#             */
/*   Updated: 2021/10/06 14:55:45 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_enemy	*new_enemy(t_enemyytpe type, t_tile *tile)
{
	t_enemy	*enemy;

	enemy = malloc(sizeof(t_enemy));
	if (enemy == NULL)
		return (null_error("malloc error on new_enemy()"));
	enemy->type = type;
	enemy->dir = 0;
	enemy->tile = tile;
	enemy->og_tile = enemy->tile;
	enemy->next = NULL;
	return (enemy);
}

t_enemy	*last_enemy(t_enemy *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	add_enemy(t_game *game, t_enemyytpe type, t_tile *tile)
{
	t_enemy	*new;

	new = new_enemy(type, tile);
	if (new == NULL)
		return ;
	if (game->enemy_list == NULL)
		game->enemy_list = new;
	else
		last_enemy(game->enemy_list)->next = new;
}
