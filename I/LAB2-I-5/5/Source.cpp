#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int numar_baza_10;
	int aux[100];
	int numar_baza_2[100];
	int i=1;
	int k;
	int numar_baza_10_2=0;
	int ok;

	cout << "numarul initial este:"; cin >> numar_baza_10;
	k = numar_baza_10;
	while (k != 0)
	{
		aux[i] = k % 2;
		k /= 2;
		i++;
	}
	for (k = 1; k <= i; k++)
		numar_baza_2[i - k + 1] = aux[k];
	for (k = 1; k <= i; k++)
		cout << numar_baza_2[k];
	cout << endl;
	for (k = 1; k <= i; k++)
		if (numar_baza_2[k] == 1)
			numar_baza_10_2 = numar_baza_10_2 + pow(2, i - k + 1);
	cout << "numar baza 10 este:" << numar_baza_10_2 << '\n';
	cout << "numerele prime maimici de cat numar_baza_10 sunt:" << " 2" << " 3" << ' ';
	for (i = 4; i <= numar_baza_10; i++)
	{
		ok = 1;
		for (k = 2; k <= i / 2 && k != 0; i++)
			if (i%k == 0)
				ok = 0;
		if (ok == 1)
			cout << i << ' ';
	}
	return 0;
}