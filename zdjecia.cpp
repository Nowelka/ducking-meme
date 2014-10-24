#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() 
{
	char* zawartosc;
	float * num;
	string szaw;
	int szerokosc = 0, wysokosc = 0;
	ifstream Plik("pod.jpg");//, ios::binary);
	while(Plik.good()) {
		//			zawartosc = new char[sizeof(float)];
		//			Plik.read(zawartosc, sizeof(float));
		//			num = (float*) zawartosc;
		//			cout << num << endl;
		//			num = NULL, zawartosc = NULL;
		Plik >> szaw;
		cout << szaw << endl;
		szaw = "";
	}
	cout << "Szerokosc " << szerokosc << "  Wysokosc " << wysokosc << endl;
	Plik.close();
	return 0;
}
