#include <iostream>
#include "ChatBot.h"
#include "Bot1.h"
#include "Bot2.h"
#include "SmartPointer.cpp"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	smart_pointer<ChatBot> BinBot = new Bot1;
	smart_pointer<ChatBot> Smarty = new VerySmartBot;
	string msg;
	cout << "¬ведите сообщение: "; cin >> msg;
	cout << "BinBot:" << endl;
	BinBot->answer(msg);
	cout << "VerySmartBot:" << endl;
	Smarty->answer(msg);
	cout << "";
	return 0;
}