#pragma once
#include <string>

using namespace std;
class player {
private:
	string nickname;
	char team; //символ команды
	int rate;

public:
	player(string nickname) :
		nickname{ nickname }, team{ '-' }, rate{ 0 } {};
	char get_team() { return team; }
	void win() {rate++;}
	void lose() {rate--;}
	virtual bool move(char** game_map, int map_size, int& i, int& j);

};
