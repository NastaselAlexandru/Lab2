#include <iostream>

using namespace std;

struct 
{
	float note[20];
}student[100];

int main()
{
	float medie;
	int numar_studenti;
	int i;
	int j;
	int numar_examene;
	int suma;

	cout << "numarul de studenti este:";
	cin >> numar_studenti;
	cout << "numarul de examene este:";
	cin >> numar_examene;
	for (i = 1; i <= numar_studenti; i++)
	{
		for (j = 1; j <= numar_examene; j++)
			cin >> student[i].note[j];
	}
	for (i = 1; i <= numar_studenti; i++)
	{
		medie = 0;
		suma = 0;
		for (j = 1; j <= numar_examene; j++)
			suma = suma + student[i].note[j];
		medie = suma / numar_examene / 1.0;
		if (medie >= 8)
			cout << "studentul " << i << " trecut" << '\n';
		else
			cout << "studentul " << i << " nu trecut" << '\n';
	}
	return 0;
}