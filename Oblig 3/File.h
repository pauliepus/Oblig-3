#pragma once

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;


class File {

private:
	string name;
	int dofc;   //date of creation
	int size;

public:
	File(string name_) {

		name = name_;
		dofc = 2023;
		size = rand() % 100;
	}

	File() {

		name = "";
		dofc = 2023;
		size = rand() % 100;
	}
	void print() {
		cout << name << " " << dofc << " " << size << endl;
	}

};
