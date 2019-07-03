//zad2
#include <stdio.h>
#include <math.h>

float tablica[6];


void WCZYTAJ_TAB()
{
	printf("Teraz podaj liczby\n");
	for (int i = 0; i <= 6; i++)
	{
		printf("Liczba nr %d: ", i + 1);
		scanf("%f", &tablica[i]);
	}
}
void WYPISZ_TAB()
{
	for (int i = 0; i <=6; i++)
	{
		printf("Tab[%d] = %.2f\n", i + 1, tablica[i]);
	}
}
void SUMA_TAB()
{
	float suma=0, srednia;
	for (int i = 0; i <= 6; i++)
	{
		suma += tablica[i];
	}
	srednia = suma / 7;
	printf("Suma liczb w tablicy: %.2f, srednia: %.2f\n", suma, srednia);
}
void MIN()
{
	float min;
	min = tablica[0];
	for (int i = 1; i < 7; i++)
		if (tablica[i] < min)
			min=tablica[i];
	printf("Wartosc minimalna: %.2f\n", min);
}
void MAX()
{
	float max;
	max = tablica[0];
	for (int i = 1; i < 7; i++)
		if (tablica[i] > max)
			max = tablica[i];
	printf("Wartosc maksymalna: %.2f\n", max);
}
void POTEGI()
{
	printf("Liczby podniesione do kwadratu\n");
	float potega;
	for (int i = 0; i < 7; i++)
	{
		potega = pow(tablica[i], 2);
		printf("Liczba nr %d: %.2f\n", i + 1, potega);
	}
}


int main()
{
	printf("Wczytam liczby ktore podasz do tablicy, a pozniej je wyswietle. Do dziela!\n");
	WCZYTAJ_TAB();
	WYPISZ_TAB();
	SUMA_TAB();
	MIN();
	MAX();
	POTEGI();
	return 0;
}
/*---------------------------------------------------------------------------------------------------------
Zad 3 
#include <iostream>
#include <math.h>
using namespace std;

float A[3], B[3], C[3];

void TAB_A(float tabA[3])
{
	cout << "Wpisz elementy tablicy A :"<<endl ;
	for (int i = 0; i < 4; i++)
	{
		cout << "Element nr " << i + 1<<": "; cin >> tabA[i];
	}
}
void TAB_B(float tabB[3])
{
	cout << "Wpisz elementy tablicy B :" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Element nr " << i + 1<<": "; cin >> tabB[i];
	}
}
void SUMA(float tabA[3], float tabB[3], float tabC[3])
{
	cout << "Oto sumy tablic A i B: "<<endl;
		for (int i = 0; i < 4; i++)
		{
			tabC[i] = tabA[i] + tabB[i];
			cout << "Suma nr " << i + 1 << ": " << tabC[i]<<endl;
		}
}

int main()
{
	
	cout << "Siemanko, robimy tablice ; )";
	TAB_A(A);
	TAB_B(B);
	SUMA(A, B, C);
}

--------------------------------------------------------------------------------------------------------------
zad 5 (coœ nie tak)

#include <stdio.h>
float tablica[2][2];
float sum;

void WCZYTAJ(float tab[2][2]);
void WYPISZ(float tab[2][2]);
void SUMA(float suma, float tab[2][2]);

int main()
{
	
	WCZYTAJ(tablica);
	WYPISZ(tablica);
	SUMA(sum, tablica);
	return 0;
}

void WCZYTAJ(float tab[2][2])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Liczba [%d, %d]: ", i + 1, j + 1);
			scanf("%f", &tab[i][j]);
		}
	}
}
void WYPISZ(float tab[2][2])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%7.2f", tab[i][j]);
		}
		printf("\n");
	}
}
void SUMA(float suma, float tab[2][2])
{
	int x, y;
	printf("Wiersz czy kolumna? (1 - wiersz, 2 - kolumna)");
	scanf("%d", &y);
	printf("Wybierz wiersz lub kolumne (1,2,3): ");
	scanf("%d", &x);
	;
	if (y == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			suma += tab[x - 1][i];
		}
	}
	if (y == 2)
	{
		for (int i = 0; i < 3; i++)
		{
			suma += tab[i][x - 1];
		}
	}
	if (y != 2 && y != 1)
	{
		printf("Zla cyfra!");
	}
	printf("%.2f", suma);
}
---------------------------------------------------------------------------------------------------------------
zad 6 

#include <iostream>
#include <time.h>
using namespace std;
int tablica[10];
void WYPELNIENIE(int tab[10]);
int main()
{
	
	WYPELNIENIE(tablica);

	return 0;
}
void WYPELNIENIE(int tab[10])
{
	int i, x=0, y=0, z=0;
	srand (time(NULL));
	cout << "Przedzial liczb od: ";
	cin >> x; 
	cout << "do: "; cin >> y;
	z = y - x;
	for (i = 0; i < 10; i++)
	{
		tab[i] = rand()%z+x;
		cout << "Liczba nr " << i + 1 << ": " << tab[i]<<endl;
	}

}
-----------------------------------------------------------------------------------------------------------
zad 7 

#include <iostream>

using namespace std;
float tablica1[3];
float tablica2[3];

void WYPELNIENIE(float A[3]);
void SUMA(float A[3], float B[3]);

int main()
{
	WYPELNIENIE(tablica1);
	SUMA(tablica1, tablica2);
	return 0;
}

void WYPELNIENIE(float A[3])
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> A[i];
	}
}
void SUMA(float A[3], float B[3])
{
	for (int i = 3; i >= 0; i--)
	{
		B[3 - i]=A[i];
		cout << "Liczba z B nr " << 4 - i << ": " << B[3 - i]<<endl;
	}

}
-----------------------------------------------------------------------------------------------------

*/
