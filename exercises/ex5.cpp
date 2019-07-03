//Zadanie 1 i 2

#include <iostream>
using namespace std;
int main()
{
          char *PORY[] = { "Wiosna", "Lato", "Jesien", "Zima" };
	       char tab[] = "abcdefghijk";
	       char * wsk;
		int *p, K[][5] = { { 10,9,8,7 },{ 6,5,4 },{ 3,2 },{ 1 } };
		cout << "K[][5] "<<endl<<"{10,9,8,7}"<<endl<<" {6,5,4}"<<endl<<" {3,2}"<<endl<<" {1}"<<endl<<endl;
		p = *K; cout << "p = *K    cout<<*p    ";cout << *p << endl; // .....
		p = K[1]; cout << "p = K[1]  cout<<*p    "; cout << *p << endl; // .....
		p = *K + 2; cout << "p=*K+2    cout<<*p      "; cout << *p << endl; // .....
		p = *K + 6; cout << "p=*K+6    cout<<*p      "; cout << *p << endl; // .....
		p = *(K + 2); cout << "p = *(K+2)    cout<<*p      "; cout << *p << endl; // .....
		p = K[1] + 2; cout << "p = K[1] + 2     cout<<*p     ";cout << *p << endl; // .....
		cout<<"cout<< *K       "<< *K << endl; // .....
		cout << "cout<<**K      "<<**K << endl; // .....
		cout <<"cout<<**K+3        "<< **K + 3 << endl; // .....
		cout <<"cout<<*(*K+3)      "<< *(*K + 3) << endl; // .....
		cout << "cout<<*(*(K+1)+1)    " << *(*(K+1)+1) << endl; // .....
		cout << "cout<<*(*(K+1)+5)    " << *(*(K + 1) + 5) << endl; // .....
		cout << "cout<<*(*(K+2)+4)    " << *(*(K + 2) + 4) << endl; // .....
		cout <<"cout<<K[2][3]      "<<K[2][5] << endl; // .....
		cout << "cout<<K[2][5]      " << K[2][5] << endl<<endl<<endl; // .....
		cout << "-----------------------ZADANIE 2-------------------------" << endl << "char tab[] = ''abcdefghijk''     char * wsk " << endl;
		wsk = &tab[8]; cout << "wsk = &tab[8]   putchar(*wsk)      "; putchar(*wsk); cout << endl;
		wsk += 2; cout << "wsk += 2   putchar(*wsk)        "; putchar(*wsk); cout << endl;
		cout << "putchar(*(--wsk))       "; putchar(*(--wsk)); cout << endl; //......
		cout << "putchar(tab[1])          "; putchar(tab[1]); cout << endl;//......
		cout << "putchar(*tab)         "; putchar(*tab); cout << endl; //......
		wsk = tab + 3; cout << "wsk = tab + 3    putchar(*(wsk - 1))  "; putchar(*(wsk - 1)); cout << endl; //......
		cout << "putchar(*wsk)        "; putchar(*wsk); cout << endl; //......
		putchar('\n');
		cout << "-----------------------ZADANIE 3-------------------------" << endl << "char *PORY[] = { ''Wiosna'', ''Lato'', ''Jesien'', ''Zima'' }" << endl;
		cout << "PORY[0]     " << PORY[0]<<endl;
		cout << "PORY[0][5]     " << PORY[0][5] << endl;
		cout << "PORY[2][5]     " << PORY[2][5] << endl; 
		cout << "PORY[2][8]     " << PORY[2][8] << endl;
		cout << "PORY[1][5]     " << PORY[1][5] << endl; 
		cout << "PORY[1][8]     " << PORY[1][8] << endl;
		cout << "PORY[3][5]     " << PORY[3][5] << endl; 
}

//------------------------------------------------------------------------------------------------------
/*
Zadanie 3 

a)      Czy w j�zyku C/C++ mo�na zdefiniowa� dwie funkcje o takiej samej nazwie?
	Jak to si� powinno zrobi� ? (je�eli mo�na)
	 

	Mo�na i nazywa si� to: prze�adowaniem nazw funkcji. Lecz jest jeden warunek. Mo�e istnie� wiele takich samych
	nazw funkcji lecz musz� r�ni� si� list� argument�w! Typ zwracany nie ma nic do rzeczy.

	Przyk�ad programu z trzema prze�adowanymi funkcjami o nazwie foo:


           int foo(int a);

           int foo(double a);

           int foo(int a, int b);

          int main()
        {
        }

b)       Co si� stanie je�eli w funkcji zwracaj�cej warto�� (typu innego ni� void)
	zapomnimy napisa� polecenia return wewn�trz kodu funkcji?
	

	To zale�y, jaki kompilator zosta� u�yty. Najcze�ciej kompilator zasygnalizuje b��d kompilacji lub ostrze�enie
	z informacj�:
	VC++, Visual Studio: "error C4716: 'foo' : must return a value",
	g++, MinGW: "no return statement in function returning non-void [-Wreturn-type]"

	nie mniej jednak jest to b��d, kt�ry trzeba poprawi�. Poniewa� obiecali�my kompilatorowi co� zwr�ci�, a tego nie robimy.
	Nale�y doda� linijk� return (co�):


      int foo(int a)
       {
	return a;
       }

        int main() 
        {
	foo(1);
        }

c)      Czym si� r�ni zako�czenie funkcji poleceniem
	return(0);
	od
	exit(0);
	 

	Funkcja widz�c s�owo kluczowe return ko�czy prac� zwracaj�c to, co zosta�o podane
	i sterowanie programu wraca do miejsca wywo�ania kontynuj�c program.
	Natomiast exit jest funkcj� przyjmuj�c� jako parametr numer b��du.
	Po wywo�aniu tej funkcji wewn�trz innej funkcji program ko�czy niezw�ocznie prac�
	po zwolnieniu zasob�w globalnych.

	Przyk�ady:

	int foo(int a)
	{
		exit(a); // niezw�ocznie zako�czenie programu.
	}

	double foo(double a)
	{
		return a; // zwr�cenie warto�ci oraz powr�t do miejsca wywo�ania
	}

	int main()
	{
		foo(1.0);
	
		foo(1); // ta funkcja ju� si� nie wywo�a.
	}

d)      Czym si� r�ni� stosowane w j�zyku C++ trzy sposoby przekazywania argument�w funkcji?

	Kt�ry z nich jest najlepszy (najprostszy, najszybszy, najbardziej wygodny, najbezpieczniejszy)?
	 

	W j�zyku C++ istniej� trzy sposoby przekazywania arguemtn�w do funkcji, kt�re s� nast�puj�ce:
	a) przez warto��,
	b) przez referencj�,
	c) przez wska�nik.

	w przypadku podpunktu a) zostaje wykonana kopia przekazywanego obiektu, natomiast w przypadku b), c)
	zostaje przekazany oryginalny obiekt. Z tym, �e przekazywanie przez referencj� tworzony jest
	alias na nazw� originalnego obiektu. Dzi�ki temu mo�na odwo�ywa� si� do tego samego obiektu
	poprzez dwie r�ne nazwy. W przypadku c) przekazujemy do funkcji adres zmiennej (operator &).
	R�wnie� mamy pe�ny dostep do oryginalnego obiektu (z kt�rej adres zosta� pobrany) z tym, �e
	aby dokona� modyfikacji musimy wy�uska� (operator *) obiekt spod przekazanego adresu.

	Podsumowanie:
	Referencja jest o tyle wygodniejsza, �e nie musimy wy�uskiwa� obiektu, lecz u�ywa� go 
	zwyczajnie poprzez nazw� (wygodnie, najpro�ciej, najbezpieczniejszy, najszybszy).

	Przyk�ady:


	int foo(int a) // przez warto��
	{	
		return a;
	}

	int foo1(int& a) // przez referencj�
	{
		return a;
	}

	int foo2(int* a) // przez wska�nik
	{
		return *a;
	}

	int main() // przyk�ady wywo�a�
	{
		int a = 100;

		foo(a);

		foo1(a);

		foo2(&a);
	}

e)    Czym si� r�ni�:
	- definicja funkcji
	- wywo�anie funkcji
	- prototyp funkcji

	Jakie informacje musz� by� w nich zawarte (np. w prototypie funkcji)
	a kt�re s� opcjonalne, tzn. mog� zosta� pomini�te?
	

	Definicja funkcji jest to nag��wek funkcji plus cia�o funkcji, w kt�rej zawarte
	s� instrukcje sk�adaj�ce si� na blok funkcji. Natomiast wywo�anie funkcji
	to miejsce w programie, w kt�rej u�ywa jest nazwa funkcji z operatorem ().
	Kompilator widz�c taki zapis uruchamia odpowiedni podprogram (moment wykonywania
	si� podprogramu). Nazwy argument�w formalnych mog� by� pomini�te, ale nie ich typy!

	Prototyp funkcji jest to deklaracja nazwy funkcji (nag��wka), w kt�rym zawarta
	jest pe�na lista argument�w. Pomini�te mog� by� nazwy zmiennych (parametr�w formalnych), ale nie ich typy!

	Przyk�ady:

	int foo(int /*a*/, int /*b*/); // prototyp (deklaracja) funkcji (POMINI�TE NAZWY ARGUMENT�W FORMALNYCH)
	
	//int main()
	//{
		//foo(5, 1); // wywo�anie funkcji
	//}

	//int foo(int a, int /*b*/) // definicja funkcji (POMINI�TA JEDNA NAZWA ARGUMENTU FORMALNEGO)
	//{ // blok cia�a funkcji
		//return a;
	//}
/*
f)	 W jaki spos�b przekazujemy do/z funkcji argumenty typu tablicowego?
	Czy tablica mo�e by� przekazana do funkcji �przez warto��
	(tzn. �e funkcja korzysta z kopii tablicy)

	Tablica NIE mo�e zosta� przekazana przez warto�� (jedynie jej konkretny element).
	Zawsze kompilator przekazuje adres na pierwszy element tablicy (przez jej nazw�, lub &nazwa[0]),
	by unikn�� kopiowania wszystkich element�w tablicy.

	Tablic� mo�na przekaza� dwojako (wska�nik, operator[]), natomiast zwr�cic mo�na przez tylko przez wska�nik, przyk�ady:


	void foo(int tablica[]) {} // przekazanie tablicy z zastosowaniem operatora []

	void foo1(int* tablica) {} // przekazanie tablicy z zastosowaniem wska�nika

	// oba zapisy s� r�wnowa�ne!

	int* foo() // zwracanie tablicy przez wska�nik (adres by� mo�e na nowo zaalokowan� tablic�)
	{
		return new int[10];
	}

	int main()
	{
		int tablica[10];

		foo(tablica);
		foo1(tablica);

		int* tablicaDynamiczna = foo();

		delete [] tablicaDynamiczna; // kasowanie tablicy dynamicznej
	}

g)      Czy w j�zyku C++ mo�na wywo�a� funkcj� podaj�c mniejsz� ilo�� argument�w
	ni� ta kt�r� podano w definicji lub prototypie funkcji?

	Oczywi�cie, w tym celu u�ywa si� argument�w domniemanych funkcji. Jest jednak pewien
	warunek. Domniename argumenty mog� by� te, kt�re zajmuj� ostatnie miejsca na li�cie.
	R�wnie� na takiej mo�na pomin�� nazwy argument�w formalnych.

	przyk�ady:


	void foo(int a, int = 1, int = 0); // dwa domniemane argumenty, plus, pomini�cie nazw dla argument�w formalnych

	//void foo(int a, int b = 1, int c); // B�AD!!! Nie mo�na pomin�� domniemanego argumentu dla c.

	int main()
	{
		foo(1, 2, 3);
		foo(1, 2);
		foo(1);
	}

	void foo(int a, int b, int c) {}

h)      Czy poprawne s� nast�puj�ce deklaracje:
	a) void funkcja_A(int tablica[10]);
	b) void funkcja_B(int tablica[ ]);
	c) void funkcja_C(int [10] );
	d) void funkcja_D(int [ ] );
	e) void funkcja_E( [ ] );

	a) tak
	b) tak
	c) tak
	d) tak
	e) nie (sam operator [] nie jest dozwolony)

	przyk�ady:

	void funkcja_A(int tablica[10])
	{
		// poprawna deklaracja funkcji
	}

	void funkcja_B(int tablica[])
	{
		// poprawna deklaracja funkcji
	}

	void funkcja_C(int[10]) // pomini�to nazw� zmiennej tablicowej
	{
		// poprawna deklaracja funkcji
	}

	void funkcja_D(int[]) // pomini�to nazw� zmiennej tablicowej
	{
		// poprawna deklaracja funkcji
	}


	void funkcja_E([])
	{
		// niepoprawna deklaracja funkcji
	}

i) 	Jaki znaczenie maj� specyfikatory static i register wyst�puj�ce przed
	definicjami zmiennych wewn�trz funkcji?

	Je�eli wewn�trz funkcji przed zmienn� b�dzie specyfikator static to zmienna b�dzie istnie� przez ca�y czas 
	wykonywania programu. Efekt ten uzyskamy te� dzi�ki zmiennym globalnym.

	Natomiast register "daje do zrozumienia" kompilatorowi, �e b�dziemy wiele razy odwo�ywa� si� do zmiennej 
	i umieszcza j� w rejestrze procesora.Jednak wsp�czesne kompilatory na tyle optymalizuj� kod, �e same wybieraj�, 
	kt�re zmienne maj� by� umieszczone w rejestrze procesora, a kt�re nie.

j)	 Jaki znaczenie ma s�owo kluczowe inline wyst�puj�ce w linii definiuj�cej
	nag��wek funkcji? Kiedy nale�y je wykorzystywa�, a kiedy jest to niewskazane?
 	
	Funkcje inline jak mo�na by si� domy�li� z nazwy s� funkcjami "w linii", znaczy to, �e kompilator widz�c �e funkcja 
	jest inline w miejsce jej wywo�ania nie wstawia jak w normalnym przypadku wska�nika do tej funkcji w pami�ci,
 	lecz wpisuje jej kod w miejsce jej wyst�pienia. Takie funkcje dalej jednak wyst�puj� w pami�ci komputera, dzi�ki czemu 
	mo�emy tworzy� do nich wska�niki i u�ywa� ich jak w przypadku zwyk�ych funkcji.inline stosuj tak, jak ka�d� inn� 
	optymalizacj�, czyli dopiero po stwierdzeniu, �e jest ona potrzebna. Kilka wyj�tk�w, w kt�rych inline mo�e mie� sens
 	ju� podczas pisania pierwszej wersji kodu, to:
	Funkcje puste
	Funkcje przekazuj�ce tylko wywo�anie dalej
	Trywialne wyra�enia
	Poza tymi szczeg�lnymi sytuacjami nie ma powodu dla u�ywania inline bez uzasadnienia.

k)	Jakie znaczenie maj� argumenty funkcji g��wnej:
	int main( int argc, char** argv) ?
	Jak mo�na je wykorzysta� ?

	- int argc - liczba ca�kowit� pokazuj�c� liczb� argument�w w wierszu polece� przy wywo�ywaniu programu 
	(��cznie z nazw� programu),
	- char *argv[ ] - wska�nik do tablicy ci�g�w znakowych, zawieraj�cych argumenty z wiersza polece�; 
	alternatywnie argv mo�e by� zadeklarowany jako **argv, je�li programi�cie ta posta� bardziej odpowiada.

	#include <iostream>

	int main(int argc, char** argv) {
    	std::cout << "Have " << argc << " arguments:" << std::endl;
    	for (int i = 0; i < argc; ++i) {
        	std::cout << argv[i] << std::endl;
    	}
	}
	Running it with ./test a1 b2 c3 will output

	Have 4 arguments:
	./test
	a1
	b2
	c3
-----------------------------------------------------------------------------------------
Zadanie 4
Na portalu w pliku param.cpp jest pomocniczy program, kt�ry ilustruje r�nice w
sposobie przekazywania parametr�w do funkcji. Przeanalizuj ten program. Zwr�� szczeg�ln�
uwag� na spos�b deklaracji parametru w nag��wku funkcji oraz spos�b wywo�ania funkcji.
Przeanalizuj komunikaty, kt�re zostan� wypisane na ekranie po uruchomieniu tego programu.
#include <stdio.h>
#include <conio.h>
void funkcja_1(int war); // parametr przekazywany przez WARTOSC
 // (C/C++)
void funkcja_2(int *wsk); // parametr przekazywany przez WSKAZNIK
 // (C/C++)
void funkcja_3(int &ref); // parametr przekazywany przez REFERENCJE
 // (tylko C++)
int main()
{ int PAR;
 PAR = 1;
 printf("PRZEKAZYWANIE PARAMETRU PRZEZ WARTOSC: (C/C++)\n");
 printf(" main: PAR = %d (przed wywolaniem funkcji 1)\n", PAR);
 funkcja_1( PAR );
 printf(" main: PAR = %d (po wywolaniu funkcji 1)\n", PAR);
 getch(); printf("\n\n");
 PAR = 2;
 printf("PRZEKAZYWANIE PARAMETRU PRZEZ WSKAZNIK: (C/C++)\n");
 printf("czyli przekazywanie przez wartosc adresu parametru\n");
 printf(" main: PAR = %d (przed wywolaniem funkcji 2)\n", PAR);
 funkcja_2( &PAR );
 printf(" main: PAR = %d (po wywolaniu funkcji 2)\n", PAR);
 getch(); printf("\n\n");

 PAR = 3;
 printf("PRZEKAZYWANIE PARAMETRU PRZEZ REFERENCJE: (tylko C++)\n");
 printf(" main: PAR = %d (przed wywolaniem funkcji 3)\n", PAR);
 funkcja_3( PAR );
 printf(" main: PAR = %d (po wywolaniu funkcji 3)\n", PAR);
 getch();
} 
void funkcja_1(int war)
{
 printf(" funkcja_1: war = %d (przed modyfikacja)\n", war);
 war += 10;
 printf(" funkcja_1: war = %d (po modyfikacji)\n", war);
}
void funkcja_2(int *wsk)
{
 printf(" funkcja_2: *wsk = %d (przed modyfikacja)\n", *wsk);
 *wsk += 10;
 printf(" funkcja_2: *wsk = %d (po modyfikacji)\n", *wsk);
}
void funkcja_3(int &ref)
{
 printf(" funkcja_3: ref = %d (przed modyfikacja)\n", ref);
 ref += 10;
 printf(" funkcja_3: ref = %d (po modyfikacji)\n", ref);
}
---------------------------------------------------------------------------------------
Zadanie 5
 Jaki b�dzie wyniki dzia�ania poni�szego programu? Wyja�nij dlaczego.

#include <stdio.h>
void funkc(int * j, int n) //definicja fuknkcji
{ *j = 1;
 n = *j;
}
main()
{ int i = 2, k = 3;
 funkc(&i, k); //wywo�anie funkcji
 printf("i=%d, k=%d", i, k);0
} 

*/