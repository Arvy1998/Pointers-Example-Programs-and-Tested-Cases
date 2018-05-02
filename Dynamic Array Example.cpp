#include <iostream>
#include <cstdio>

using namespace std;

int *masyvas_1(int kiekis) {
	int *x1, i;
	x1 = (int *)malloc(kiekis * sizeof(int));
	for (i = 0; i < kiekis; i++) {
		cin >> *(x1 + i);
	}
	return x1;
}

int *masyvas_2(int kiekis) {
	int *x2, j;
	x2 = (int *)malloc(kiekis * sizeof(int));
	for (j = 0; j < kiekis; j++) {
		cin >> *(x2 + j);
	}
	return x2;
}

int *naujas_masyvas(int *masyvas1, int *masyvas2, int kiekis1, int kiekis2) {
	int *naujas_masyvas_;
	naujas_masyvas_ = new int[kiekis1 + kiekis2];
	for (auto n = 0; n < kiekis1; n++) {
		naujas_masyvas_[n] = *(masyvas1 + n);
	}
	int m = 0;
	for (auto n = kiekis1; n < kiekis1 + kiekis2; n++) {
		naujas_masyvas_[n] = *(masyvas2 + m);
		m++;
	}
	return naujas_masyvas_;
}

void rikiavimas(int *naujas_masyvas_, int kiekis1, int kiekis2) {
	int i, j, temp;
	for (i = 1; i < kiekis1 + kiekis2; i++) {
		j = i;
		while (j > 0 && naujas_masyvas_[j - 1] > naujas_masyvas_[j]) {
			temp = naujas_masyvas_[j];
			naujas_masyvas_[j] = naujas_masyvas_[j - 1];
			naujas_masyvas_[j - 1] = temp;
			j--;
		}
	}
	for (auto x = 0; x < kiekis1 + kiekis2; x++) {
		cout << naujas_masyvas_[x] << " ";
	}
}

int main() {
	int *masyvas1, kiekis1;
	int *masyvas2, kiekis2;
	int *new_masyvas_;
	cin >> kiekis1;
	masyvas1 = masyvas_1(kiekis1);
	cin >> kiekis2;
	masyvas2 = masyvas_2(kiekis2);
	new_masyvas_ = naujas_masyvas(masyvas1, masyvas2, kiekis1, kiekis2);
	rikiavimas(new_masyvas_, kiekis1, kiekis2);
	return 0;
}
