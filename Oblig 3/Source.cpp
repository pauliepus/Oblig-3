#include <iostream>
#include <string>
#include "File.h"
#include "Folder.h"

using namespace std;

//honestly, I've most likely gotten way farther than I ever anticipated. 
// But, I still can't grasp it well enough to learn properly.

int y; //can type "const" to make it "perma" the same value 
int z;  

class Person {

private:
	string name;
	string surname;
	int age;

public:
	Person(string newName, string newSurname, int newAge) {
		name = newName;
		surname = newSurname;
		age = newAge;
	}

};

people::Person;

int main() {
	string name0;
	string surname0;
	int age0;

	bool option = true;
	
	Person people[5];
	
	Person person0("Ass", "Kisser", 20);
	Person person1("Cookie", "Eater", 27);

	for (i = 0; i > 5; i++) {


	}


	do {
		cout << "Name : " << endl;
		cin >> name0;
		cout << "Surname : " << endl;
		cin >> surname0;
		cout << "Age (numerical): " << endl;
		cin >> age0;

	}
	
	cout << "joe make a file ?" << /t << "yes ? press 1." << endl;
	cout << "jOe make new folder," << /t << "pls." << " Type 2." << endl;
	cout << "joe check a folder ?" << /t << "press 3." << endl;
	cout << "You want to leave Joe?" << /t << "press 4." << endl;

	switch{
		// damn I need two switchcases tbh. one for adding values, and one for selecting folders/files huh..
	case 1:
		cout << "Creating file..." << endl;
		makeFile;
		break;
	case 2:
		makeFolder;
		break;
	case 3:
		openFolder;
		break;		
	case 4:
		cout << "Joe had a great time ;^)" << endl;
		option = false;
		break;
	default:
		cout << "bad input. Try agane." << endl;

	}while (!option);



} 


