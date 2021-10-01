#pragma once
#include"player.h"
class Round {
private:
	int map_size;
	char** game_map;
	void clear_map();
	bool are_free_cells_exist();
	bool set_move_data(int i, int j, char value);
public:
	Round(int size);
	~Round();
	//Play round
	void play_game(player* player_1, player* player_2);
};