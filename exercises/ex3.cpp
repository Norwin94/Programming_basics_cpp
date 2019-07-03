//ZAD. 2

#include <iostream>
#include <time.h>

using namespace std;
const int n = 75;
int tablica[n];
void MENU();
void WYPISANIE(int tab[n]);
void SREDNIA(int tab[n]);
void SREDNIA_N(int tab[n]);
void ROSNACE(int tab[n]);
void PARY(int tab[n]);
void MINIMUM(int tab[n]);
void UJEMNE(int tab[n]);
void MAKS_3(int tab[n]);


int main()
{
	int liczba;
	srand(time(NULL));

	MENU();
	do {
		cin >> liczba;
		switch (liczba)
		{
		case 1: WYPISANIE(tablica);
			break;
		case 2: SREDNIA(tablica);
			break;
		case 3: SREDNIA_N(tablica);
			break;
		case 4: ROSNACE(tablica);
			break;
		case 5: PARY(tablica);
			break;
		case 6: MINIMUM(tablica);
			break;
		case 7: UJEMNE(tablica);
			break;
		case 8: MAKS_3(tablica);
			break;
		case 9: cout << "Koniec programu!";
			break;
		case 10: cout << "Czyszcze!"; system("cls"); MENU();
			break;
		default: cout << "Podaj inna liczbe: "; cin >> liczba;
			break;
		}
	
	} while (liczba != 9);
	return 0;
}
void MENU()
{
	cout << "MENU: (Wcisnij cyfre a nastepnie ENTER)\n\n------------------------------------\n1.Wypisanie\n2.Srednia\n";
	cout << "3.Srednia nieparzystych\n4.Sprawdz czy liczby sa rosnace\n5.Pary takich samych liczb\n6.Najmniejsza liczba\n";
	cout << "7.Liczby ujemne\n8.Najwieksza liczba podzielna przez 3\n9.Koniec programu\n10.Czysc program\n";
}

void WYPISANIE(int tab[n])
{
		for (int i = 0; i < n; i++)
		{
			int liczba = -30 + rand() % 81;
			tab[i] = liczba;
			cout << "Tab[" << i + 1 << "]: " << tab[i] << endl;
		}
}

void SREDNIA(int tab[n])
{
	int i, ilosc = 0; float suma = 0;
	for (i = 0; i < n; i++)
	{
		suma += tab[i];
		ilosc++;
	}
   cout << "Srednia: " << suma / ilosc << endl;
}

void SREDNIA_N(int tab[n])
{
	float suma_n = 0; int ilosc_n = 0;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] % 2 != 0)
		{
			suma_n += tab[i];
			ilosc_n++;
		}
	}
	if (ilosc_n == 0) { cout << "Nie ma nieparzystych" << endl; }
	else { cout << "Srednia nieparzystych: " << suma_n / ilosc_n << endl; }
}

void ROSNACE(int tab[n])
{
	int rosnace = 0;                     //   min = -40;
	for (int i = 0; i < n; i++)          //   for (i = 0; i < n; i++)  
	{                                    //   { 
		if (tab[i] > tab[i - 1])         //     if (tab[i]>min)
		{                                //      {
		 rosnace++; ;                    //         min=tab[i];
		}                                //         rosnace++;  }
	}                                    //   }
	if (rosnace == n) { cout << "Tablica liczb rosnacych" << endl; }
	else { cout << "Tablica licz nierosnacych" << endl; }
}

void PARY(int tab[n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (tab[i] == tab[j] && i != j && i<j)
			{
				cout << "Tab[" << i + 1 << "]=" << tab[i]<< "  Tab[" << j + 1 << "] = " << tab[j]<< endl;
			}
		}
	}
}

void MINIMUM(int tab[n])
{
	int i, x, min = tab[0];
	for (i = 0; i < n; i++)
	{
		if (tab[i] < min)
		{
			min = tab[i];
			x = i + 1;
		}
	}
	cout << "Wartosc minimalna: Tab[" << x << "] = " << min << endl;
}

void UJEMNE(int tab[n])
{
	cout << "Wartosci mniejsze od zera: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] < 0)
		{
			cout << "Tab[" << i + 1 << "] = " << tab[i] << endl;
		}
	}
}

void MAKS_3(int tab[n])
{
	int y = 0, maks_3=0;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] % 3 == 0 && tab[i] > maks_3)
		{
			maks_3 = tab[i];
			y = i + 1;
		}
	}
	if (maks_3 == 0) { cout << "Nie ma takich liczb"<<endl; }
	else { cout << "Najwieksza liczba podzielna przez 3: Tab[" << y << "] = " << maks_3 << endl; }
}
//-------------------------------------------------------------------------------------------------------------------
/*
ZAD 4.
#include <iostream>

using namespace std;
float tab[100];
int il=0;
void MENU();
void WPISZ();
void CZYSC();

int main()
{  
	MENU();
	int wybor;
	while (true) {
		cout << "Co chcesz zrobic?" << endl;
		cin >> wybor;
		switch (wybor)
		{
		case 1: WPISZ();
			break;
		case 2: CZYSC();
			break;
		case 3: system("cls"); MENU();
			break;
		case 4: cout << "Koniec programu"<<endl; exit(0);
			break;
		default:cout << "Podaj inna liczbe: "; 
			break;
		}
	}
	return 0;
}
void MENU()
{
	cout << "--------MENU--------" << endl << endl;
	cout << "---1. WPISZ WYNIK---" << endl;
	cout << "---2. CZYSZ WYNIKI--" << endl;
	cout << "---3. CZYSC EKRAN--" << endl;
	cout << "---4. KONIEC---------" << endl << endl;
}
void WPISZ()
{
	float wynik;
		cout << "Podaj wynik: ";
		cin >> wynik;
		if (il != 0)
		{
			for (int i = il - 1; i >= 0; i--)
			{
				if (tab[i] >= wynik)
				{
					tab[i + 1] = tab[i];
					
				}
				if (tab[i] < wynik && tab[i+1] > wynik) { tab[i + 1] = wynik; }
				
				else if (tab[il] < wynik) { tab[il] = wynik; }
			}
		if (tab[0] > wynik) { tab[0] = wynik; }
		}
		if (il == 0) { tab[0] = wynik; }
		il++;
		cout << endl;
		for (int i = 0; i < il; i++)
			{
				cout << "Tab[" << i << "] = " << tab[i] << endl;
			}
		cout << endl;
}
void CZYSC()
{
	for(int i=0;i<il;i++)
	{
		tab[i] = 0;
	}
	il = 0;
	cout << "Tablica wyczyszczona!"<<endl;
}
-----------------------------------------------------------------------------------------------------------
zad 5 a)

#include <iostream>
#include <conio.h>
using namespace std;
const int n = 10;
int main()
{
	int tab[10] = { 3,0,1,8,7,2,5,4,9,6 };
	for (int i = 1; i<n; i++)
	{
		int j = i;
		int bufor = tab[j];
		while ((j>0) && (tab[j - 1]>bufor))
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = bufor;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Tab[" << i << "] = " << tab[i]<<endl;
	}

	return 0;
}
---------------------------------------------------------------------------------------------------
zad 5 b)

#include <iostream>
#include <conio.h>
using namespace std;
const int n = 10;
int main()
{
	int tab[10] = { 3,0,1,8,7,2,5,4,9,6 };
	int min; 
	for (int i = 0; i<n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j<n; j++)
			if (tab[j] < tab[min])
			{
				min = j;
			}
		swap(tab[i], tab[min]);
	}



	for (int i = 0; i < 10; i++)
	{
		cout << "Tab[" << i << "] = " << tab[i] << endl;
	}

	return 0;
}
----------------------------------------------------------------------------------------
zad 5 c) [pseudodynamiczna tablica];

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int ilosc = 10, min;
	int tab[100] = { 3,0,1,8,7,2,5,4,9,6 };
	while (true)
	{
		for (int i = ilosc - 1; i >= 0; i--)
		{
			tab[i + 1] = tab[i];
		}
		cin >> tab[0];
		ilosc++;
		for (int i = 0; i < ilosc; i++)
		{
			for (int j = 0; j < ilosc - 1; j++)
			{
				if (tab[j] > tab[j + 1])
					swap(tab[j], tab[j + 1]);

			}
		}
		
		
		for (int i = 0; i < ilosc; i++)
		{
			cout << "Tab[" << i << "] = " << tab[i] << endl;
		}
		
	}

	return 0;
}

*/