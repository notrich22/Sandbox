#include "TTTround.h"
void Round::clear_map() {
	for (int i = 0; i < map_size; i++) {
		for (int j = 0; j < map_size; j++) {
			game_map[i][j] = '-';
		}
	}
}
bool Round::are_free_cells_exist() {
	for (int i = 0; i < map_size; i++) {
		for (int j = 0; j < map_size; j++) {
			if(game_map[i][j] == '-')
				return true;
		}
	}
	return false;
}
Round::Round(int size) : map_size{ size } {
	game_map = new char* [size];
	for (int i = 0; i < size; i++) {
		game_map[i] = new char[size];
		for (int j = 0; j < size; j++) {
			game_map[i][j] = '-';
		}
	}
	
}
bool Round::set_move_data(int i, int j, char value) {
	if (i < 0 || i >= map_size || j < 0 || j >= map_size || !(value == 'x' || value == 'y')) {

	}
}

Round::~Round() {
	for (int i = 0; i < map_size; i++) {
		delete game_map[i];
	}
}
void Round::play_game(player* player_1, player* player_2) {
	clear_map();
	player* current_player, *second_player;
	if (player_1->get_team() == 'x' && player_2->get_team() == 'o'){
		current_player = player_1;
		second_player = player_2;}
	else if (player_1->get_team() == 'o' && player_2->get_team() == 'x') {
		current_player = player_2;
		second_player = player_2;
	}
	else
		return;

	do {
		if (!are_free_cells_exist()) {
			return;
		}
		bool is_end = true;
		do {
			int i, j;
			if (current_player->move(game_map, map_size, i, j)) {
				set_move_data(i, j, current_player->get_team());

			}
			else {
				current_player->lose();
				second_player->win();
				return;
			}
		}while(!is_end)
	} while (1);
}