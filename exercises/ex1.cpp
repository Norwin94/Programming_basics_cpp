//Æw. 1	
#include <stdio.h>
int main()
{
        double a;
	scanf("%lf", &a);
	printf("%e\n", a);
	printf("%.f\n", a);
	printf("%.3f\n", a);

return 0;
}
/*
-------------------------------------------------------------------------------------------
Æw. 2  

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string imie, nazwisko, imie1, nazwisko1, data, data1;
	int staz, staz1;
	float zarobki, zarobki1;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	cout << "Podaj date urodzenia: ";
	cin >> data;
	cout << "Podaj dlugosc stazu: ";
	cin >> staz;
	cout << "Podaj zarobki: ";
	cin >> zarobki;
	cout << "Podaj imie1: ";
	cin >> imie1;
	cout << "Podaj nazwisko1: ";
	cin >> nazwisko1;
	cout << "Podaj date urodzenia1: ";
	cin >> data1;
	cout << "Podaj dlugosc stazu1: ";
	cin >> staz1;
	cout << "Podaj zarobki1: ";
	cin >> zarobki1;

	cout << "Imie: " << left << setw(10) << imie << "Nazwisko: " << left << setw(10) << nazwisko << "Urodzony(a): " << left << setw(15) << data
		<< "Staz: " << staz << left << setw(10);
	if (staz == 1)
		cout << " rok";
	else if(staz > 1 && staz < 5)
		cout << " lata";
	else 
	cout << " lat";

	cout << "Stawka: " << zarobki << left << setw(10) << " zl/godz" << endl;

	cout << "Imie: " << left << setw(10) << imie1 << "Nazwisko: " << left << setw(10) << nazwisko1 << "Urodzony(a): " << left << setw(15) << data1
		<< "Staz: " << staz1 << left << setw(10);
	if (staz1 == 1)
		cout << " rok";
	else if (staz1 > 1 && staz < 5)
		cout << " lata";
	else
		cout << " lat";

	cout << "Stawka: " << zarobki1 << left << setw(10) << " zl/godz" <<endl;

-----------------------------------------------------------------------------------------------

Æw. 3 

#include <stdio.h>

int main()
{
	float a, b, c, d, e, f, x, y;
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	x = ((a*b) / (b + c)) - ((a*c) / (b + c));
        y = (a/(b-(c/(d-(e/f)))));
	printf("%f\n %f\n", x, y);

	return 0;
}
--------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
	float a, b, c, max, x;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >>c;
	if (a > b && a > c)
	{
		a = max;
		x = max - (b + c);
	}
	if (b > a && b > c)
	{
		b = max;
		x = max - (a + c);
	}
	if (c > a && c > b)
	{
		c = max;
		x = max - (b + a);
	}
	
	if (x < 0)
	{
		cout << "Mozna";
	}
	else
	{
		cout << "Nie mozna";
	}

	return 0;
}



	if(x)
	if (a > b && a == c)
		cout << "Nidyrydy";
	if (a == c == b)
		cout << "Trojkat rownoboczny";


if (a + b > max || a + c > b || b + c > a)
		cout << "Mozna";
	else
		cout << "Nie mozna";
------------------------------------------------------------------------------
Zadanie ze sprawdzianu, parzyste

#include <stdio.h>
#include <math.h>
int main()
{

	int a, b, c, d, p=0, x1, x2, x3, x4, suma;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a % 2 == 0) {
		p++;
		x1 = a;
	}
	else
	{
		x1 = 0;
	}
	if (b % 2 == 0) {
		p++;
		x2 = b;
	}
	else {
		x2 = 0;
	}
	if (c % 2 == 0) {
		p++;
		x3 = c;
	}
	else
	{
		x3 = 0;
	}
	if (d % 2 == 0) {
		p++;
		x4 = d;
	}
	else {
		x4 = 0;
	}
	suma = x1 + x2 + x3 + x4;
	printf("Suma to: %d\nIlosc to: %d\n", suma, p);

	return 0;

}
*/