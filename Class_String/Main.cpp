#include "String.cpp"
using namespace std;
int main() {
	String str1("String");
	String str2; str2 = "01234";
	String str3("String");
	cout << "Str1: "; str1.print();
	cout << "Str2: "; str2.print();
	cout << "Str3: "; str3.print();
	cout << "Str1 length: " << str1.get_length() << endl;
	cout << "Str1 & Str2:";(str1 == str2)?cout << "EQUAL" << endl : cout << "NOT EQUAL" << endl;
	cout << "Str1 & Str3:"; (str1 != str3) ? cout << "NOT EQUAL" << endl : cout << "EQUAL" << endl;
	str3 = str1 + str3;
	cout << "(+CHECK)Str1+Str3="; str3.print();
	str1 += str2;
	cout << "(+=CHECK)Str1+Str3="; str1.print();
	str1.clear();
	cout << "Str1 cleared: "; str1.print(); cout << endl;
	BinaryString binstr1("1001");
	cout << "Bin_String: "; binstr1.print();
	BinaryString binstr2("1001");
	cout << "Bin_String2: "; binstr2.print();
	cout << "BStr1 & \"10001\":"; (binstr1 == "10001") ? cout << "EQUAL" << endl : cout << "NOT EQUAL" << endl;
	cout << "BStr1 & BStr2:"; (binstr1 != binstr2) ? cout << "NOT EQUAL" << endl : cout << "EQUAL" << endl;
}