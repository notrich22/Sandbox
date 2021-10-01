#pragma once
#include <iostream>
using namespace std;
class ChatBot
{
public:
	ChatBot() {
		cout << "Доброго времени суток! Вас приветствует ";
		cout << this << endl;
	}
	~ChatBot() {
		cout << "До новых встреч! Сказал: ";
		cout << this << endl;
	}
	virtual void answer(string str) = 0;
};