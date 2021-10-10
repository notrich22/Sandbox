#include <iostream>
//#define DEBUG
using namespace std;
class String {
protected:
	char symbol[256] = " ";
	int length = 0;
public:
	//Operators
	String operator=(string Str) {
		length = 0;
		for (int i = 0; Str[i]; i++) {
			symbol[i] = Str[i];
			length++;
		}
		return *this;
	}
	bool operator==(String str) {
		for (int i = 0; i < str.length; i++) {
			if (symbol[i] != str.symbol[i])return false;
		}
		return true;
	}
	bool operator!=(String str) {
		for (int i = 0; i < str.length; i++) {
			if (symbol[i] != str.symbol[i])return true;
		}
		return false;
	}
	String operator+(String Str) {
		String result;
		for (int i = 0; i < length + Str.length; i++) {
			if (i < length)result.symbol[i] = this->symbol[i];
			else result.symbol[i] = Str.symbol[i-length];
		}
		result.length += Str.length + length;
		return result;
	}
	String operator+=(String Str) {
		for (int i = length; i < length + Str.length; i++) {
			symbol[i] = Str.symbol[i-length];
		}
		length += Str.length;
		return *this;
	}
	//Constructors and destructors
	String() {
#ifdef DEBUG
		cout << "StrConstructor: " << this << endl;
#endif // DEBUG
	}
	String(string Str) {
		for (int i = 0; Str[i]; i++) {
			symbol[i] = Str[i];
			length++;
		}
#ifdef DEBUG
		cout << "StrConstructor: " << this << endl;
#endif // DEBUG
	}
	~String() {
#ifdef DEBUG
		cout << "StrDestructor: " << this << endl;

#endif // DEBUG
	}
	//Methods
	int get_length() {
		return length;
	}
	void print() {
		for (int i = 0; i < this->length; i++) {
			cout << symbol[i];
		}
		cout << endl;
	}
	void clear() {
		for (int i = 0; i <= length; i++)
			symbol[i] = *" ";
	}
};
class BinaryString : public String {
protected:
	char symbol[256] = " ";
	int length = 0;
public:
	// Operators
	BinaryString operator=(string str) {
		if (chk_bin(str)) {
			for (int i = 0; i < str.length(); i++) {
				symbol[i] = str[i];
			}
		}
		else
			return *this;
	}

	//Constructors and destructors
	BinaryString() {
#ifdef DEBUG
		cout << "BinStrConstructor: " << this << endl;
#endif // DEBUG
	}
	BinaryString(string str) {
		if (chk_bin(str)) {
			this->length = 0;
			for (int i = 0; i < str.length(); i++, this->length++) {
				symbol[i] = str[i];
			}
		}
	}
	~BinaryString() {
#ifdef DEBUG
		cout << "BinStrDestructor: " << this << endl;

#endif // DEBUG
	}

	// Methods
	bool chk_bin(string str) {
		for (int i = 0; i < str.length(); i++)
			if (str[i] != '0' && str[i] != '1')
				return false;
		return true;
	}
};