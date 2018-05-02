#include <iostream>

using namespace std;

void Keisti(int *a, int *b) {
	int *temp = new int;
	*temp = *a;
	*a = *b;
	*b = *temp;
}

int main()
{
	int x, y, *a, *b;
	a = &x;
	b = &y;
	cin >> x >> y;
	Keisti(a, b);
	cout << *a << " " << *b;
	return 0;
}
