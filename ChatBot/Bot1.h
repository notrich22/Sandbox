#pragma once
#include<iostream>
#include"ChatBot.h"
using namespace std;
class Bot1 : public ChatBot {
public:
	Bot1() {}
	~Bot1() {}
	void answer(string str) {
		bool binary = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != 48 && str[i] != 49) { binary = false; break; }
		}
		try {
			if (binary) {
				cout << "Поздравляю, Вы знаете мой язык! =)" << endl;
			}
			else {
				throw - 1;
			}
		}
		catch (int) {
			cout << "К сожалению я понимаю только двоичный код =(" << endl;
		}
	}
};