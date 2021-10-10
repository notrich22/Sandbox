#pragma once
#include <iostream>
using namespace std;
class Square {
protected:
	double a; //Side length
	double d; //Diagonal
	double s_area; // Square area
	double s_perimeter; // Square perimeter
public:
	//Methods
	double get_a() {
		return a;
	}
	double get_d() {
		return d;
	}
	void set_a(double a) {
		this->a = a;
	}
	void set_d(double d) {
		this->d = d;
	}
	void s_calculate() {
		this->d = sqrt(2) * a;
		this->s_area = a * a;
		this->s_perimeter = a * 4;
	}
	//
	Square(double a) : a{ a } { s_calculate(); };
	~Square() {};
	void sq_print() {
		cout << "\tSquare:" << endl;
		cout << "'a' length: " << a << endl;
		cout << "'d' length: " << d << endl;
		cout << "Area: " << s_area << endl;
		cout << "Perimeter: " << s_perimeter << endl;
	}
};

class Circle {
protected:
	double R; // Radius
	const double pi = 3.14;
	double c_area; // Circle area
	double c_perimeter; // Circle perimeter
public:
	void c_calctulate() {
		this->c_area = pi * R * R;
		this->c_perimeter = 2 * pi * R;
	}
	double get_R() {
		return R;
	}
	void set_R(double R) {
		this->R = R;
	}
	Circle(double r) :R{ r } { c_calctulate(); };
	~Circle() { };
	void c_print() {
		cout << "\tCircle:" << endl;
		cout << "Radius: " << R << endl;
		cout << "Area: " << c_area << endl;
		cout << "Perimeter: " << c_perimeter << endl;
	}
};

class Circle_in_Square : public Square, Circle {
protected:
	double sq_without_circle;
public:
	Circle_in_Square(double a, double r) : Square(a), Circle(r) { if (a / 2 != r) { this->a = 0; this->R = 0; } calculate(); };
	~Circle_in_Square() {};
	void calculate() {
		this->sq_without_circle = this->s_area - this->c_area;
	}
	void print() {
		cout << "\tSquare:" << endl;
		cout << "'a' length: " << a << endl;
		cout << "'d' length: " << d << endl;
		cout << "Area: " << s_area << endl;
		cout << "Perimeter: " << s_perimeter << endl;
		cout << "\tCircle:" << endl;
		cout << "Radius: " << R << endl;
		cout << "Area: " << c_area << endl;
		cout << "Perimeter: " << c_perimeter << endl;
		cout << "\tCircle in square: " << endl;
		cout << "Area of square without circle: " << sq_without_circle << endl;
	}
};