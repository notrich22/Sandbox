#include <iostream>
#include "ChatBot.h"
#include "Bot1.h"
#include "Bot2.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	ChatBot* BinBot = new Bot1;
	ChatBot* Smarty = new VerySmartBot;
	string msg;
	cout << "¬ведите сообщение: "; cin >> msg;
	cout << "BinBot:" << endl;
	BinBot->answer(msg);
	cout << "VerySmartBot:" << endl;
	Smarty->answer(msg);
	cout << "";
	delete BinBot;
	delete Smarty;
	return 0;
}