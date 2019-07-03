#include <iostream>
#include <conio.h>
using namespace std;

const int N=3;
int F;

struct Studenci {
	char nazwisko[20];
	char imie[12];
	int rok;
}; 
Studenci spis[N]; 

void Wczytaj(Studenci*s);
void Wyswietl(Studenci*s);
void Wyszukaj(Studenci*s);
void Zmiana(Studenci*s);

int main() 
{ 
	Wczytaj(spis);
	Wyswietl(spis);
	Zmiana(spis);
	Wyswietl(spis);
	Wyszukaj(spis);
	

	
	return 0;
}
void Wczytaj(Studenci*s)
{
	cout << "Ile chcesz wczytac nazwisk? ";
	cin >> F;
	while (F > N || F < 0) { cout << "Podaj inna liczbe: "; cin >> F; }
	for (int i = 0; i<F; i++)
	{
		cout << "Podaj nazwisko nr " << i + 1 << ": ";
		cin >> s[i].nazwisko;
		cout << "Podaj imie nr " << i + 1 << ": ";
		cin >> s[i].imie;
		cout << "Podaj rok urodzenia: ";
		cin >> s[i].rok;
	}
}
void Wyswietl(Studenci*s)
{
	for (int i = 0; i <F; i++)
	{
		cout << i<< ". Nazwisko: " << s[i].nazwisko;
		cout << "   Imie: " << s[i].imie;
		cout << "   Rok urodzenia: " << s[i].rok << endl;
	}
}
void Wyszukaj(Studenci*s)
{
	int x, y=0,rocznik;
	char a, b;
	cout << "Szukaj za pomoca: (1-nazwisko, 2-imie, 3-rok urodzenia)"<<endl;
	cin >> x;
	while (x > 3 || x < 0) { cout << "Podaj inna liczbe: "; cin >> x; }
	if (x == 3)
	{
		cout << "Podaj rocznik: ";
		cin >> rocznik;
		for (int i = 0; i < F; i++)
		{
			if (s[i].rok == rocznik)
			{
				y++; cout << "Student nr " << i << ": " << s[i].nazwisko << "\t" << s[i].imie << "\t" << s[i].rok << endl;
			}
		}
		if(y==0){  cout << "Nie ma takiego nazwiska" << endl;  }
	}
	else if (x == 2)
	{
		cout << "Podaj pierwsza litere imienia: ";
		cin >> b;
		for (int i = 0; i < N; i++)
		{
			if (s[i].imie[0] == b)
			{
				y++; cout << "Student nr " << i << ": " << s[i].nazwisko << "\t" << s[i].imie << "\t" << s[i].rok << endl;
			}
		}
		if (y == 0) { cout << "Nie ma takiego nazwiska" << endl; }
	}
	else if (x == 1)
	{
		cout << "Podaj pierwsza litere nazwiska: ";
		cin >> a;
		for (int i = 0; i < N; i++)
		{
			if (s[i].nazwisko[0] == a)
			{
				y++; cout << "Student nr " << i<< ": " << s[i].nazwisko << "\t" << s[i].imie << "\t" << s[i].rok << endl;
			}
		}
		if (y == 0) { cout << "Nie ma takiego nazwiska" << endl; }
	}
}
void Zmiana(Studenci*s)
{
	int x, y, rocznik;
	cout << "Zmiana danych studenta nr: ";
	cin >> y; while (y >= F || y < 0) { cout << "Podaj inna liczbe: "; cin >> y; }
	cout << "Student nr " << y << ": " << s[y].nazwisko << "\t" << s[y].imie << "\t" << s[y].rok << endl;
	cout << "Co chcesz zmienic: (1-nazwisko, 2-imie, 3-rok urodzenia)" << endl;
	cin >> x;
	while (x > 3 || x < 1) { cout << "Podaj inna liczbe: "; cin >> x; }
	if (x == 3)
	{
		cout << "Podaj nowy rocznik: ";
		cin >> s[y].rok;
	}
	else if (x == 2)
	{
		cout << "Podaj nowe imie: ";
		cin >> s[y].imie;
	}
	else if (x == 1)
	{
		cout << "Podaj nowe nazwisko: ";
		cin >> s[y].nazwisko;
    }
}