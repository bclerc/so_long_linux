/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <allopez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:02:29 by allopez           #+#    #+#             */
/*   Updated: 2021/10/05 16:32:08 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_to_empty(t_game *game, t_tile *tile)
{
	tile->type = PLAYER;
	if (game->player.tile->type != EXIT)
		game->player.tile->type = EMPTY;
	game->player.tile = tile;
}

void	pick_collect(t_game *game, t_tile *tile)
{
	tile->type = EMPTY;
	game->collects--;
}

void	move_to_exit(t_game *game, t_tile *tile)
{
	mlx_put_image_to_window(game->mlx, game->window, game->white_panel, 0, 0);
	remove_player(game);
	game->collects = -1;
}

void	move_to_enemy(t_game *game, t_tile *tile)
{
	remove_player(game);
	mlx_put_image_to_window(game->mlx, game->window, game->red_panel, 0, 0);
}
