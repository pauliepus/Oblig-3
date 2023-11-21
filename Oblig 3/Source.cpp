#include <iostream>
#include <string>
#include "File.h"
#include "Folder.h"

using namespace std;

//honestly, I've most likely gotten way farther than I ever anticipated. 
// But, I still can't grasp it well enough to learn properly.

//can type "const" to make it "perma" the same value 


int main() {
		
	bool option = true;
		
	int input;
	string inputstring;
	
	Folder rootFolder("root");
	Folder* activeFolder=&rootFolder;
	
	while (option) {

		cout << "joe make a file ?" << "\t" << "yes ? press 1." << endl;
		cout << "jOe make new folder," << "\t" << "pls." << " Type 2." << endl;
		cout << "joe open a folder ?" << "\t" << "press 3." << endl;
		cout << "joe check folder?" << "\t" << "press 4." << endl;
		cout << "You want to leave Joe?" << "\t" << "press 5." << endl;
		cout << "Typee 6 to return to parent folder!" << endl;
		cin >> input;
		
		switch (input) {

			// damn I need two switchcases tbh. one for adding values, and one for selecting folders/files huh..

		case 1:
						
			cout << "What would you like to name the file?.." << endl;
			cin >> inputstring;
			cout << "Creating file..." << endl;
			activeFolder->addFile(inputstring);
			cout << endl;

			break;
		case 2:
			
			cout << "What would you like to name the folder?.." << endl;
			cin >> inputstring;
			cout << "Creating folder..." << endl;
			activeFolder->addFolder(inputstring);
			cout << endl;

			break;
		case 3:
			cout << "Which folder would u like to open." << endl;
			cin >> inputstring;
			cout << "Opening folder.." << endl;
			cout << endl;
			activeFolder = activeFolder->getFolder(inputstring);

			break;
		case 4:
			cout << "listing contents.." << endl;
			activeFolder->print();
			cout << endl;

			break;
		case 5:
			cout << "Joe had a great time ;^)" << endl;
			option = false;
			cout << endl;

			break;

		case 6:
			activeFolder = activeFolder->parentFolder;

			break;
		default:
			cout << "bad input. Try agane." << endl;

		}
	}

} 


