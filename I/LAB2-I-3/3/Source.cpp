#include <iostream>

using namespace std;

struct
{
	int numar[100];
}sir;

int main()
{
	int n;
	int max;
	int min;
	int i;

	cout << "n este egal cu:";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cout << "sir.numar[" << i << "]=";
		cin >> sir.numar[i];
		max = min = sir.numar[1];
		if (sir.numar[i] > max)
			max = sir.numar[i];
		if (sir.numar[i] < min)
			min = sir.numar[i];
	}
	cout << "minumul este:" << min << '\n' << "maximul este:" << max;
}