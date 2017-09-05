#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

char presidents[50];											//initialize string array for presidents

char* getdata() {												//function to read & insert data

	ifstream prez;
	prez.open("prez.dat");										//open data file
	
	char current;												//initialize variable for current pres
	int i = 0;													//initialize counter
	int n = sizeof(presidents) / sizeof(presidents[0]);

	while (!prez.eof() && i < 50) {
		//current = (char)prez.get();								//keep track of current president name
		current = prez.get();
		presidents[i] = current;								//add current president to end of list
		cout << presidents;
		i++;
	}
	/*
	sort(presidents, presidents + n);
	for (int p = 0; p < 50; p++) {
		cout << presidents[p] << endl;
	}
	*/
	return presidents;
}

int main() {
	getdata();
	cout << presidents;
	return 0;
}