#include <iostream>
#include <stdio.h>
#include "prototipi.h"
#include <string>
#include <string.h>
#include <fstream>
using namespace std;

void scriviTesto(string stringa) {
	ofstream fp("testo.txt");
	fp << stringa;
	fp.close();
}

void leggiTesto(string stringa) {
	ifstream fp("testo.txt");
	while (getline(fp, stringa)) {
		cout << stringa;
	}
	fp.close();
}