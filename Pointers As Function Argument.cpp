#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void Skaiciavimas(long double *masyvas, long double *kiekis, long double &MIN, long double &MAX, long double &average) {
	bool RASTAS = false;
	long double suma = 0;
	for (auto i = 0; i < *kiekis; i++) {
		suma = suma + *(masyvas + i);
		if (RASTAS == true) {
			if (MIN > *(masyvas + i)) {
				MIN = *(masyvas + i);
			}
			if (MAX < *(masyvas + i)) {
				MAX = *(masyvas + i);
			}
		}
		else {
			RASTAS = true;
			MAX = *(masyvas + i);
			MIN = *(masyvas + i);
		}
	}
	average = suma / *kiekis;
}

int main() {
	long double MIN, MAX;
	long double *kiekis;
	kiekis = new long double;
	long double *masyvas;
	masyvas = new long double[10000];
	long double average;
	ifstream failas;
	failas.open("seka.txt");
	failas >> *kiekis;
	for (auto i = 0; i < *kiekis; i++) {
		failas >> *(masyvas + i);
	}
	failas.close();
	Skaiciavimas(masyvas, kiekis, MIN, MAX, average);
	ofstream failas_rez;
	failas_rez.open("seka_rez.txt");
	failas_rez << MIN << " " << MAX << " " << fixed << setprecision(2) << average;
	failas_rez.close();
	return 0;
}
