#include <iostream>
#include "prototipi.h"
#include <string>
#include <fstream>//libreria contenente 3 classi: ofstream, ifstream e fstream;

using namespace std;


int main() {
	//creo una stringa che conterrà l'input dell'utente, che verrà poi scritto sul file di testo:
	string stringaInput= "";
	//creo una seconda stringa, che conterrà invece, riga per riga, il contenuto nel file ditesto, che verrà poi stampato nel terminale:
	string stringaOutput = "";
	//richiedo l'input all'utente, che otterrò utilizando la funzione getline(), siccome cin>> non funziona se sono presenti spazi o caratteri non visibili;
	cout << "Scrivi qualcosa: " << endl;
	getline(cin, stringaInput); //il primo parametro è cin, in questo modo, l'input proviene dalla tastiera;
	//utilizzo la mia funzione per scrivere il testo digitato dall'utente sul file;
	scriviTesto(stringaInput);
	cout << endl << endl<<"visualizzo il contenuto del file :"<<endl<<endl;
	//infine, utilizzo l'altra funzione per prelevare righa per riga il testo contenuto nel file, che verrà mostrato a schermo; 
	leggiTesto(stringaOutput);


	







	return 0;
}