#pragma once
#include "ChatBot.h"
class VerySmartBot : public ChatBot {
public:
	VerySmartBot() {};
	~VerySmartBot() {};
	void answer(string str) {
		try {
			for (int i = 0; i < str.length(); i++) {
				if (str[i] >= 48 && str[i] <= 57) { throw - 1; }
			}
			cout << "УРА! Я все понял!" << endl;
		}
		catch (int) {
			cout << "Я не понимаю цифры!" << endl;
		}
	}
};