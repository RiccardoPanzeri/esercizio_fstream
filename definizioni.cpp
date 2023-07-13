#include <iostream>
#include "prototipi.h"
#include <string>
#include <fstream>
using namespace std;

void scriviTesto(string stringa) {
	ofstream fp("testo.txt"); //creo lo stream in scrittura con la classe ofstream;
	fp << stringa; //scrivo il contenuto della stringa all'interno del file;
	fp.close();//chiudo lo stream;
}

void leggiTesto(string stringa) {
	ifstream fp("testo.txt"); //apro lo stream in lettura tramite la classe ifstream;
	while (getline(fp, stringa)) { //con questo ciclo precondizionato, leggo riga per riga il contenuto del file con la funzione getline() con lo stream come primo parametro (origine) e la stringa come secondo (destinazione);
		cout << stringa;  //ad ogni ciclo stampo la stringa contenente la nuova riga di testo;
	}
	fp.close();//chiudo lo stream;
}