#pragma once
#include <iostream>
using namespace std;
class ChatBot
{
public:
	ChatBot() {
		cout << "������� ������� �����! ��� ������������ ";
		cout << this << endl;
	}
	~ChatBot() {
		cout << "�� ����� ������! ������: ";
		cout << this << endl;
	}
	virtual void answer(string str) = 0;
};