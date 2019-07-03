#include <iostream>
#include <conio.h>
using namespace std;

const unsigned int n=6;
float tab[n];

void SYMETRIA(float tablica[n]);

int main()
{
	SYMETRIA(tab);
	return 0;
}
	void SYMETRIA(float tablica[n])
	{
		float suma = 0;
		for (int i = 0; i <=n; i++)
		{
			if (tablica[i] == tablica[n - i])
			{
				suma++;
				
			}
			cout << suma<<endl;
		}
		if (suma == n+1)
		{
			cout << "Symetria";
		}
		else {
			cout << "Nie symetria";
		}

	}


//---------------------------------------------------------------------------------------------------------
/*
int main()    czy tab[i] jest liter¹ i liczenie tego
{
	char tab[5] = {'a','+','d','-','c' };
	for (int i = 'a'; i <= 'z'; i++)
	{
		
		int ilosc = 0;
		for (int j = 0; j <= 4; j++) 
		{
			if (tab[j] == i) 
			{ 
				++ilosc;
			}
		}
		// Drukujemy
		printf("Litera %c w ilosci %d\n", i, ilosc);
	}
}