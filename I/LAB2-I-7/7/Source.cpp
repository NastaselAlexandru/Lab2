#include <iostream>

using namespace std;

int main()
{
	long numar;
	long i;
	int ok = 1;

	cout << "numarul este:";
	cin >> numar;

	for (i = 2; i <= numar / 2; i++)
	{
		if (numar%i == 0)
			ok = 0;
	}
	if (ok == 0)
		cout << "numarul nu este prim";
	else
		cout << "numarul este prim";
}