#pragma once
#include "ChatBot.h"
class VerySmartBot : public ChatBot {
public:
	VerySmartBot() {};
	~VerySmartBot() {};
	void answer(string str) {
		bool has_nums = false;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 48 && str[i] <= 57) { has_nums = true; break; }
		}
		if (has_nums) cout << "Прошу меня простить, но я пока не научился понимать цифры.\nНапишите, пожалуйста, без цифр" << endl;
		else cout << "УРА! Я все понял!" << endl;
	}
};