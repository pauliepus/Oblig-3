#pragma once

#include <iostream>
#include "File.h"
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

class Folder {
private:

	string name;
	int Dofc;   //date of creation
	Folder* folders;
	File files[10];
	int size;
	int numberoffiles;
	int numberoffolders;


public:

	Folder* parentFolder;

	Folder() {
		name = "";
		Dofc = 2023;
		size = rand() % 100;
		folders = nullptr;
		numberoffiles = 0;
		numberoffolders = 0;
		parentFolder = nullptr;
	}

	Folder(string newname) {
		name = newname;
		Dofc = 2023;
		size = rand() % 100;
		folders = new Folder[5];
		numberoffiles = 0;
		numberoffolders = 0;
		parentFolder = this;
	}
	
	void print()
	{
		cout << "- " << name << "\t" << Dofc << "\t" << size << endl;
		
		for (int i = 0; i < numberoffolders; i++) {
			folders[i].print();

		}
		for (int i = 0; i < numberoffiles; i++) {
			files[i].print();

		}

	}

	string getName()
	{
		return name;
	}

	int getDofc()
	{
		return Dofc;
	}

	int getSize()
	{
		return size;
	}

	void setName(string newName)
	{
		name = newName;
	}
	
	void addFile(string fileName) {
		if (numberoffiles < 10) {
			files[numberoffiles] = File(fileName);
			numberoffiles++;
		}
		else {
			cout << "errorrr. Files, too many!" << endl;
		}
	}

	void addFolder(string folderName) {
		if (numberoffolders < 5) {
			folders[numberoffolders] = Folder(folderName);
			folders[numberoffolders].parentFolder = this;
			numberoffolders++;
		}
		else {
			cout << "errrr. Too many folders!" << endl;
		}
	}

	Folder* getFolder(string folderName) {
		for (int i = 0; i < numberoffolders; i++) {
			if (folders[i].getName() == folderName) {
				return &folders[i];
			}
		}
		return this;
	}

};


