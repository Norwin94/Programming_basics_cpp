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

a)      Czy w jêzyku C/C++ mo¿na zdefiniowaæ dwie funkcje o takiej samej nazwie?
	Jak to siê powinno zrobiæ ? (je¿eli mo¿na)
	 

	Mo¿na i nazywa siê to: prze³adowaniem nazw funkcji. Lecz jest jeden warunek. Mo¿e istnieæ wiele takich samych
	nazw funkcji lecz musz¹ ró¿niæ siê list¹ argumentów! Typ zwracany nie ma nic do rzeczy.

	Przyk³ad programu z trzema prze³adowanymi funkcjami o nazwie foo:


           int foo(int a);

           int foo(double a);

           int foo(int a, int b);

          int main()
        {
        }

b)       Co siê stanie je¿eli w funkcji zwracaj¹cej wartoœæ (typu innego ni¿ void)
	zapomnimy napisaæ polecenia return wewn¹trz kodu funkcji?
	

	To zale¿y, jaki kompilator zosta³ u¿yty. Najczeœciej kompilator zasygnalizuje b³¹d kompilacji lub ostrze¿enie
	z informacj¹:
	VC++, Visual Studio: "error C4716: 'foo' : must return a value",
	g++, MinGW: "no return statement in function returning non-void [-Wreturn-type]"

	nie mniej jednak jest to b³¹d, który trzeba poprawiæ. Poniewa¿ obiecaliœmy kompilatorowi coœ zwróciæ, a tego nie robimy.
	Nale¿y dodaæ linijkê return (coœ):


      int foo(int a)
       {
	return a;
       }

        int main() 
        {
	foo(1);
        }

c)      Czym siê ró¿ni zakoñczenie funkcji poleceniem
	return(0);
	od
	exit(0);
	 

	Funkcja widz¹c s³owo kluczowe return koñczy pracê zwracaj¹c to, co zosta³o podane
	i sterowanie programu wraca do miejsca wywo³ania kontynuj¹c program.
	Natomiast exit jest funkcj¹ przyjmuj¹c¹ jako parametr numer b³êdu.
	Po wywo³aniu tej funkcji wewn¹trz innej funkcji program koñczy niezw³ocznie pracê
	po zwolnieniu zasobów globalnych.

	Przyk³ady:

	int foo(int a)
	{
		exit(a); // niezw³ocznie zakoñczenie programu.
	}

	double foo(double a)
	{
		return a; // zwrócenie wartoœci oraz powrót do miejsca wywo³ania
	}

	int main()
	{
		foo(1.0);
	
		foo(1); // ta funkcja ju¿ siê nie wywo³a.
	}

d)      Czym siê ró¿ni¹ stosowane w jêzyku C++ trzy sposoby przekazywania argumentów funkcji?

	Który z nich jest najlepszy (najprostszy, najszybszy, najbardziej wygodny, najbezpieczniejszy)?
	 

	W jêzyku C++ istniej¹ trzy sposoby przekazywania arguemtnów do funkcji, które s¹ nastêpuj¹ce:
	a) przez wartoœæ,
	b) przez referencjê,
	c) przez wskaŸnik.

	w przypadku podpunktu a) zostaje wykonana kopia przekazywanego obiektu, natomiast w przypadku b), c)
	zostaje przekazany oryginalny obiekt. Z tym, ¿e przekazywanie przez referencjê tworzony jest
	alias na nazwê originalnego obiektu. Dziêki temu mo¿na odwo³ywaæ siê do tego samego obiektu
	poprzez dwie ró¿ne nazwy. W przypadku c) przekazujemy do funkcji adres zmiennej (operator &).
	Równie¿ mamy pe³ny dostep do oryginalnego obiektu (z której adres zosta³ pobrany) z tym, ¿e
	aby dokonaæ modyfikacji musimy wy³uskaæ (operator *) obiekt spod przekazanego adresu.

	Podsumowanie:
	Referencja jest o tyle wygodniejsza, ¿e nie musimy wy³uskiwaæ obiektu, lecz u¿ywaæ go 
	zwyczajnie poprzez nazwê (wygodnie, najproœciej, najbezpieczniejszy, najszybszy).

	Przyk³ady:


	int foo(int a) // przez wartoœæ
	{	
		return a;
	}

	int foo1(int& a) // przez referencjê
	{
		return a;
	}

	int foo2(int* a) // przez wskaŸnik
	{
		return *a;
	}

	int main() // przyk³ady wywo³añ
	{
		int a = 100;

		foo(a);

		foo1(a);

		foo2(&a);
	}

e)    Czym siê ró¿ni¹:
	- definicja funkcji
	- wywo³anie funkcji
	- prototyp funkcji

	Jakie informacje musz¹ byæ w nich zawarte (np. w prototypie funkcji)
	a które s¹ opcjonalne, tzn. mog¹ zostaæ pominiête?
	

	Definicja funkcji jest to nag³ówek funkcji plus cia³o funkcji, w której zawarte
	s¹ instrukcje sk³adaj¹ce siê na blok funkcji. Natomiast wywo³anie funkcji
	to miejsce w programie, w której u¿ywa jest nazwa funkcji z operatorem ().
	Kompilator widz¹c taki zapis uruchamia odpowiedni podprogram (moment wykonywania
	siê podprogramu). Nazwy argumentów formalnych mog¹ byæ pominiête, ale nie ich typy!

	Prototyp funkcji jest to deklaracja nazwy funkcji (nag³ówka), w którym zawarta
	jest pe³na lista argumentów. Pominiête mog¹ byæ nazwy zmiennych (parametrów formalnych), ale nie ich typy!

	Przyk³ady:

	int foo(int /*a*/, int /*b*/); // prototyp (deklaracja) funkcji (POMINIÊTE NAZWY ARGUMENTÓW FORMALNYCH)
	
	//int main()
	//{
		//foo(5, 1); // wywo³anie funkcji
	//}

	//int foo(int a, int /*b*/) // definicja funkcji (POMINIÊTA JEDNA NAZWA ARGUMENTU FORMALNEGO)
	//{ // blok cia³a funkcji
		//return a;
	//}
/*
f)	 W jaki sposób przekazujemy do/z funkcji argumenty typu tablicowego?
	Czy tablica mo¿e byæ przekazana do funkcji „przez wartoœæ”
	(tzn. ¿e funkcja korzysta z kopii tablicy)

	Tablica NIE mo¿e zostaæ przekazana przez wartoœæ (jedynie jej konkretny element).
	Zawsze kompilator przekazuje adres na pierwszy element tablicy (przez jej nazwê, lub &nazwa[0]),
	by unikn¹æ kopiowania wszystkich elementów tablicy.

	Tablicê mo¿na przekazaæ dwojako (wskaŸnik, operator[]), natomiast zwrócic mo¿na przez tylko przez wskaŸnik, przyk³ady:


	void foo(int tablica[]) {} // przekazanie tablicy z zastosowaniem operatora []

	void foo1(int* tablica) {} // przekazanie tablicy z zastosowaniem wskaŸnika

	// oba zapisy s¹ równowa¿ne!

	int* foo() // zwracanie tablicy przez wskaŸnik (adres byæ mo¿e na nowo zaalokowan¹ tablicê)
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

g)      Czy w jêzyku C++ mo¿na wywo³aæ funkcjê podaj¹c mniejsz¹ iloœæ argumentów
	ni¿ ta któr¹ podano w definicji lub prototypie funkcji?

	Oczywiœcie, w tym celu u¿ywa siê argumentów domniemanych funkcji. Jest jednak pewien
	warunek. Domniename argumenty mog¹ byæ te, które zajmuj¹ ostatnie miejsca na liœcie.
	Równie¿ na takiej mo¿na pomin¹æ nazwy argumentów formalnych.

	przyk³ady:


	void foo(int a, int = 1, int = 0); // dwa domniemane argumenty, plus, pominiêcie nazw dla argumentów formalnych

	//void foo(int a, int b = 1, int c); // B£AD!!! Nie mo¿na pomin¹æ domniemanego argumentu dla c.

	int main()
	{
		foo(1, 2, 3);
		foo(1, 2);
		foo(1);
	}

	void foo(int a, int b, int c) {}

h)      Czy poprawne s¹ nastêpuj¹ce deklaracje:
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

	przyk³ady:

	void funkcja_A(int tablica[10])
	{
		// poprawna deklaracja funkcji
	}

	void funkcja_B(int tablica[])
	{
		// poprawna deklaracja funkcji
	}

	void funkcja_C(int[10]) // pominiêto nazwê zmiennej tablicowej
	{
		// poprawna deklaracja funkcji
	}

	void funkcja_D(int[]) // pominiêto nazwê zmiennej tablicowej
	{
		// poprawna deklaracja funkcji
	}


	void funkcja_E([])
	{
		// niepoprawna deklaracja funkcji
	}

i) 	Jaki znaczenie maj¹ specyfikatory static i register wystêpuj¹ce przed
	definicjami zmiennych wewn¹trz funkcji?

	Je¿eli wewn¹trz funkcji przed zmienn¹ bêdzie specyfikator static to zmienna bêdzie istnieæ przez ca³y czas 
	wykonywania programu. Efekt ten uzyskamy te¿ dziêki zmiennym globalnym.

	Natomiast register "daje do zrozumienia" kompilatorowi, ¿e bêdziemy wiele razy odwo³ywaæ siê do zmiennej 
	i umieszcza j¹ w rejestrze procesora.Jednak wspó³czesne kompilatory na tyle optymalizuj¹ kod, ¿e same wybieraj¹, 
	które zmienne maj¹ byæ umieszczone w rejestrze procesora, a które nie.

j)	 Jaki znaczenie ma s³owo kluczowe inline wystêpuj¹ce w linii definiuj¹cej
	nag³ówek funkcji? Kiedy nale¿y je wykorzystywaæ, a kiedy jest to niewskazane?
 	
	Funkcje inline jak mo¿na by siê domyœliæ z nazwy s¹ funkcjami "w linii", znaczy to, ¿e kompilator widz¹c ¿e funkcja 
	jest inline w miejsce jej wywo³ania nie wstawia jak w normalnym przypadku wskaŸnika do tej funkcji w pamiêci,
 	lecz wpisuje jej kod w miejsce jej wyst¹pienia. Takie funkcje dalej jednak wystêpuj¹ w pamiêci komputera, dziêki czemu 
	mo¿emy tworzyæ do nich wskaŸniki i u¿ywaæ ich jak w przypadku zwyk³ych funkcji.inline stosuj tak, jak ka¿d¹ inn¹ 
	optymalizacjê, czyli dopiero po stwierdzeniu, ¿e jest ona potrzebna. Kilka wyj¹tków, w których inline mo¿e mieæ sens
 	ju¿ podczas pisania pierwszej wersji kodu, to:
	Funkcje puste
	Funkcje przekazuj¹ce tylko wywo³anie dalej
	Trywialne wyra¿enia
	Poza tymi szczególnymi sytuacjami nie ma powodu dla u¿ywania inline bez uzasadnienia.

k)	Jakie znaczenie maj¹ argumenty funkcji g³ównej:
	int main( int argc, char** argv) ?
	Jak mo¿na je wykorzystaæ ?

	- int argc - liczba ca³kowit¹ pokazuj¹c¹ liczbê argumentów w wierszu poleceñ przy wywo³ywaniu programu 
	(³¹cznie z nazw¹ programu),
	- char *argv[ ] - wskaŸnik do tablicy ci¹gów znakowych, zawieraj¹cych argumenty z wiersza poleceñ; 
	alternatywnie argv mo¿e byæ zadeklarowany jako **argv, jeœli programiœcie ta postaæ bardziej odpowiada.

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
Na portalu w pliku param.cpp jest pomocniczy program, który ilustruje ró¿nice w
sposobie przekazywania parametrów do funkcji. Przeanalizuj ten program. Zwróæ szczególn¹
uwagê na sposób deklaracji parametru w nag³ówku funkcji oraz sposób wywo³ania funkcji.
Przeanalizuj komunikaty, które zostan¹ wypisane na ekranie po uruchomieniu tego programu.
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
 Jaki bêdzie wyniki dzia³ania poni¿szego programu? Wyjaœnij dlaczego.

#include <stdio.h>
void funkc(int * j, int n) //definicja fuknkcji
{ *j = 1;
 n = *j;
}
main()
{ int i = 2, k = 3;
 funkc(&i, k); //wywo³anie funkcji
 printf("i=%d, k=%d", i, k);0
} 

*/