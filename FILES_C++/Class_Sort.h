#pragma once
#include<fstream>
using namespace std;
class Sorter {
protected:
	ifstream file_read;
	ofstream file_write;
public:
	Sorter() {
		
	}
	~Sorter(){
		
	}
	int* read_arr_from_file() {
		int arr[]{ 0 };
		file_read.open("file.txt", ios::in );
		for (int i = 0; !file_read.eof(); i++) {
			arr[i] = file_read.getline();
		}
	}
};