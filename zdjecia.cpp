#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector <string> wektor;

void wczytywanieZPliku(string nazwaPliku) {
	fstream plik;
	plik.open(nazwaPliku, ios::in | ios::binary);
	string w;
	if(plik.good()) {
		do {
			plik >> w;
			wektor.push_back(w);
		}while(!plik.eof());
	}
	wektor.pop_back();
	plik.close();

	for(int i = 0; i < (int)wektor.size(); i++) {
		cout << wektor[i] << endl;
	}
}

int main(int argc, char *argv[]) {
	wczytywanieZPliku(argv[1]);
	return 0;
}
