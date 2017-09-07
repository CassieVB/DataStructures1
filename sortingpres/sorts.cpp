#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>
#include <list>

using namespace std;

//typedef string prezname;											//create data type
//prezname president[60];												//initialize string array for presidents
//std::list<string> president;										//initialize string list for president
string president[];

int n;

//string* getdata() {												//function to read & insert data
int main() {
	//cout << "This is prez: " << president << endl;
	std::ifstream prez("prez.dat");									//open data file

	if (prez.is_open()) {											//test to make sure file opens
		string current;												//initialize string variable for current president
		int c = 0;													//c counter
		
		while (!prez.eof()) {										//loop to run until end of file
			prez >> current; 
			cout << current;
			c++;													//iterate
		}
		/*
		for (int i = 0; i <= president.size(); i++) {				//for loop to print president list
			cout << presidents[i];
		}
		
		/*
		int i = 0;													//initialize counter
		while (i < 60) {
			getline(prez, current);									//set present line in prez.dat to variable "current"
			current = presidents[i];
			i++;
		}
		*/		
	}
	else {															//print error & close console if file doesn't open
		cout << "Problem opening file." << endl;
		prez.close();

	}
	/*
	for (int j = 0; j < 60; j++) {
		cout << presidents << endl;
	}
	*/

	std::cin.get();													//hold console open for testing
	return 0;
}
/*
int main() {
	return 0;
}*/