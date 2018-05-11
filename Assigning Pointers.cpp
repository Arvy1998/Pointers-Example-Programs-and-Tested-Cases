#include <iostream>

using namespace std;

int main()
{
	int * rodykle;
	int reiksme1, reiksme2;
	rodykle = &reiksme1;
	*rodykle = 100;
	rodykle = &reiksme2;
	*rodykle = 100001;
	cout << "---------------------------------" << endl;
	cout << "REIKSME 1 = " << reiksme1 << endl;
	cout << "REIKSME 2 = " << reiksme2 << endl;;
	rodykle = &reiksme1;
	*rodykle = 999;
	cout << "---------------------------------" << endl;
	cout << "REIKSME 1 = " << reiksme1 << endl;
	cout << "REIKSME 2 = " << reiksme2 << endl;
	cout << "---------------------------------" << endl;
	rodykle = &reiksme2;
	*rodykle = 'x';
	cout << "REIKSME 1 = " << reiksme1 << endl;
	cout << "REIKSME 2 = " << reiksme2 << endl;
	cout << "---------------------------------" << endl;
	rodykle = &reiksme1;
	*rodykle = *rodykle + 1;
	cout << "REIKSME 1 = " << reiksme1 << endl;
	cout << "REIKSME 2 = " << reiksme2 << endl;
	cout << "---------------------------------" << endl;
	cin.get();
	return 0;
}
