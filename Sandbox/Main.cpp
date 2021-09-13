#include <iostream>
using namespace std;


class Passport
{
protected:
	int ID;
	string frst_name;
	string scnd_name;
	string last_name;
	string date_of_birth;
public:
	Passport() {
		this->ID = -1;
		this->frst_name = "NOT VALID";
		this->scnd_name = "";
		this->last_name = "";
		this->date_of_birth = "";
	}
	Passport(int ID, string f_n, string s_n, string l_n, string d_o_b) {
		this->ID = ID;
		this->frst_name = f_n;
		this->scnd_name = s_n;
		this->last_name = l_n;
		this->date_of_birth = d_o_b;
		cout << "PassConstructor: " << this << endl;
	};
	~Passport() {
		cout << "PassDestructor: " << this << endl;
	};
	void print() {
		cout << "Passport: " << endl;
		cout << "ID: " << ID << endl;
		cout << "FIO: " << last_name << " " << frst_name << " " << scnd_name   << endl;
		cout << "Date of birth: " << date_of_birth << endl;
	}
};
class ForeignPassport:Passport {
protected:
	string date_of_exp;
	string allowed_countries;
public:
	ForeignPassport(int ID, string f_n, string s_n, string l_n, string d_o_b, string d_o_e, string a_c) : Passport(ID, f_n, s_n, l_n, d_o_b){
		date_of_exp = d_o_e;
		allowed_countries = a_c;
		cout << "ForPassConst: " << this << endl;
	}
	~ForeignPassport(){
		cout << "ForPassDestructor: " << this << endl;
	}
	void print() {
		cout << "Foreign Password:" << endl;
		cout << "ID: " << ID << endl;
		cout << "FIO: " << last_name << " " << frst_name << " " << scnd_name << endl;
		cout << "Date of birth: " << date_of_birth << endl;
		cout << "Date of expirience: " << date_of_exp << endl;
		cout << "Allowed countries: " << allowed_countries << endl;
	}
};
int main() {
	Passport Vanya(0, "Ivan", "Ivanovich", "Ivanov", "26.08.2000");
	Vanya.print();
	ForeignPassport VanyaForeign(0, "Ivan", "Ivanovich", "Ivanov", "26.08.2000", "200 Days", "Russia");
	VanyaForeign.print();
}
