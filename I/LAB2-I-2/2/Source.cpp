#include <iostream>

using namespace std;

struct 
{
	int ore;
	int minute;
	int secunde;
}timp;

int main()
{
	int viteza_alergatorului=0;
	int distanta;
	int viteza_maxima;
	int acceleratia;

	cout << "distanta pe care trebuie sa o parcurga alergatorul este:";
	cin >> distanta;
	cout << "viteza maxima este:";
	cin >> viteza_maxima;
	do
	{
		cout << "acceleratia este:";
		cin >> acceleratia;
	} while (viteza_maxima%acceleratia == 0);

	timp.ore = timp.minute = timp.secunde = 0;

	do
	{
		if (viteza_alergatorului>distanta)
		{
			timp.secunde++;
			distanta = 0;
		}
		viteza_alergatorului = viteza_alergatorului + acceleratia;
		distanta = distanta - viteza_alergatorului;
		if (viteza_alergatorului == viteza_maxima)
			acceleratia = 0;
		
		if (timp.secunde == 60)
		{
			timp.minute++;
			timp.secunde = 0;
		}
		if (timp.minute == 60)
		{
			timp.ore++;
			timp.minute = 0;
		}
	} while (distanta==0);
	return 0;
}