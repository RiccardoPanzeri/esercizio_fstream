#include <iostream>
#include <stdio.h>
#include "prototipi.h"
#include <string>
#include <string.h>
#include <fstream>

using namespace std;


int main() {

	string stringa1 = "";
	string stringa2 = "";
	cout << "Scrivi qualcosa: " << endl;
	getline(cin, stringa1);
	scriviTesto(stringa1);
	cout << endl << endl;
	leggiTesto(stringa2);


	







	return 0;
}