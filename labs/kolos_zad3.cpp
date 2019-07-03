#include <iostream>
#include <time.h>
using namespace std;
const unsigned int n = 10;

int main()
{
	srand(time(NULL));
	int tab[n];
	int i, x, max, ilosc=0;

	for (i = 0; i < n; i++)
	{
		x = -10 + rand() % 31+5;
		tab[i] = x;
	}
	for (i = 0; i < n; i++)
	{
		cout << "Tab[" << i + 1 << "]: " << tab[i]<<endl;
	}
	max = tab[0];
	for (i = 0; i < n; i++)
	{
	if(tab[i]>max)
	{
		max=tab[i];
		cout << "Max: Tab[" << i + 1 << "]: " << max<<endl;
	}
	}
	for (i = 0; i < n; i++)
	{
		if (tab[i] == max)
		{
			ilosc++;
		}
	}
	cout << "Max powtarza sie: " << ilosc << " razy"<<endl;

	return 0;
}





