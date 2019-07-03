//Zadanie 2

#include <stdio.h>

int main()
{
	//##########################################################################
	//       PRZYKLAD 1 - prosta zmienna
	//##########################################################################

	printf("\nPrzyklad 1: prosta zmienna\n");
	printf("short x = 6;    //  deklaracja zmiennej x\nshort *wsk;     //  deklaracja zmiennej wskaznikowej wsk\n\n");
	short x = 6;    //  deklaracja zmiennej x
	short *wsk;     //  deklaracja zmiennej wskaznikowej wsk
	printf("wsk = &x;       // adres zmiennj x\n\n");
	wsk = &x;       // adres zmiennj x

	printf("       x = %-8d      sizeof(x) = %d \n", x, sizeof(x));
	printf("     wsk = %p    sizeof(wsk) = %d    sizeof(*wsk) = %d \n\n", wsk, sizeof(wsk), sizeof(*wsk));
	printf("           x = %d \n", x);       // bezposrednie odwolanie do zmiennej 
	printf("        *wsk = %d \n", *wsk);    // odwolanie za pomoca wskaznika
	printf("      wsk[0] = %d \n", wsk[0]);  // odwolanie za pomoca indeksu



											 //##########################################################################
											 //       PRZYKLAD 2 - tablica jednowymiarowa
											 //##########################################################################

	printf("\n\n");
	printf("Przyklad 2: trzyelementowa tablica liczb\n");

	short tab1[3] = { 1, 3, 9 };  // 3-elementowa tablica typu short
	short *wsk1;                // wskaznik na typ short
	short(*wsk2)[3];           // wskaznik na 3-elementowa tablice typu short 

	wsk1 = tab1;                //  adres pierwszego elementu tablicy
	wsk2 = &tab1;               // adres 3-elementowej tablicy

	printf("short tab1[3] = { 1, 3, 9 }; \n\n");
	printf("short *wsk1;                // wskaznik na typ short\nshort(*wsk2)[3];           // wskaznik na 3-elementowa tablice typu short \n\nwsk1 = tab1;                //  adres pierwszego elementu tablicy\nwsk2 = &tab1;               // adres 3-elementowej tablicy\n\n");
	// wydruk wartosci wskaznikow oraz rozmiaru danych, na ktore wskazuja 
	printf("    tab1 = %p    sizeof(tab1) = %d    sizeof(*tab1) = %d \n", tab1, sizeof(tab1), sizeof(*tab1));
	printf("    wsk1 = %p    sizeof(wsk1) = %d    sizeof(*wsk1) = %d \n", wsk1, sizeof(wsk1), sizeof(*wsk1));
	printf("    wsk2 = %p    sizeof(wsk2) = %d    sizeof(*wsk2) = %d \n\n", wsk2, sizeof(wsk2), sizeof(*wsk2));

	// wydruk wartosci elementu tablicy oznaczonego kolorem szarym
	printf("     tab1[2] = %d\n", tab1[2]);  // notacja indeksowa
	printf("   *(tab1+2) = %d\n", *(tab1 + 2));  // notacja wskaznikowa
	printf("     wsk1[2] = %d\n", wsk1[2]);  // notacja indeksowa
	printf("   *(wsk1+2) = %d\n", *(wsk1 + 2));  // notacja wskaznikowa
	printf("  wsk2[0][2] = %d\n", wsk2[0][2]);  // notacja indeksowa
	printf(" *(*wsk2 +2) = %d\n", *(*wsk2 + 2));  // notacja wskaznikowa

												  //##########################################################################
												  //       PRZYKLAD 3 - dwuwymiarowa tablica liczb
												  //##########################################################################

	printf("\n\n");
	printf("Przyklad 3: dwuwymiarowa tablica liczb\n");

	int tab2[4][3] = { { 1,7,5 },{ 1,4,0 },{ 2,5,9 },{ 8,9,0 } };

	printf("int tab2[4][3] = { { 1,7,5 },{ 1,4,0 },{ 2,5,9 },{ 8,9,0 } }\n\n");
	printf("int *wsk3         wskaznik na typ int\nint(*wsk4)[3]         wskaznik na 3elementowa tablice typu int (pierwszy wiersz)\nint(*wsk5)[4][3]        wskaznik na dwuwymiarowa tablice cztery wiersze trzy kolumny typu int\n\nwsk3 = *tab2      adres pierwszego elementu z pierwszego wiersza tablicy \nwsk4 = tab2             adres 3 elementowej tablicy\nwsk5 = &tab2         adres dwuwymiarowej tablicy czterowierszowej po trzy kolumny\n\n");
	// Tu prosze dopisas deklaracje wskaznikow wsk3, wsk4, wsk5
	int *wsk3;
	int(*wsk4)[3];
	int(*wsk5)[4][3];
	// Tu prosze nadac wartosci wskaznikom wsk3, wsk4, wsk5
	wsk3 = *tab2;
	wsk4 = tab2;
	wsk5 = &tab2;
	// Tu prosze dopisac wydruk wartosci wskaznikow tab2, wsk3, wsk4, wsk5
	// oraz rozmiaru danych,  na ktore wskazuja. 
	printf("    tab2 = %p    sizeof(tab2) = %d   sizeof(*tab2) = %d \n", tab2, sizeof(tab2), sizeof(*tab2));
	printf("    wsk3 = %p    sizeof(wsk3) = %d    sizeof(*wsk3) = %d \n", wsk3, sizeof(wsk3), sizeof(*wsk3));
	printf("    wsk4 = %p    sizeof(wsk4) = %d    sizeof(*wsk4) = %d \n", wsk4, sizeof(wsk4), sizeof(*wsk4));
	printf("    wsk5 = %p    sizeof(wsk5) = %d    sizeof(*wsk5) = %d \n\n", wsk5, sizeof(wsk5), sizeof(*wsk5));

	// Tu prosze dopisac wydruk wartosci elementu tablicy oznaczonego
	// kolorem szarym. odwolania do tego elementu prosze robic za pomoca
	// identyfikatora tab2 oraz wskaznikow wsk3, wsk4, wsk5. W kazdym
	// przypadku prosze zrobic dwa warianty (z uzyciem notacji indeksowej 
	// oraz notacji wskaznikowej)        

	printf("   tab2[3][0] = %d\n", tab2[3][0]);          // lub samo [3] bez zera: printf("%d\n", *(tab2[3]));
	printf("   **(tab2+3) = %d\n", **(tab2 + 3));
	printf("      wsk3[9] = %d\n", wsk3[9]);
	printf("    *(wsk3+9) = %d\n", *(wsk3 + 9));
	printf("   wsk4[3][0] = %d\n", wsk4[3][0]);
	printf("   **(wsk4+3) = %d\n", **(wsk4 + 3));
	printf("*(*(wsk4+2)+1) = %d\n", *(*(wsk4 + 2) + 1));
	printf("wsk5[0][3][0] = %d\n", wsk5[0][3][0]);
	printf("  **(*wsk5+3) = %d\n", **(*wsk5 + 3));
	printf("*(*(*wsk5+2)+2) = %d\n", *(*(*wsk5 + 2) + 2));
	//##########################################################################
	//       PRZYKLAD 4 - dwywymiarowa tablica o zmiennaj liczbie kolumn
	//##########################################################################

	printf("\n\n");
	printf("Przyklad 4: dwuwymiarowa tablica liczb, ktora zawiera trzy wiersze o roznej liczbie kolumn\n");
	printf("char tab3a[] = { 1, 5, 0 } \nchar tab3b[] = { 6, 2, 9, 8, 1, 0 };\nchar tab3c[] = { 3, 4, 7, 0 };\nchar *tab3[3] = { tab3a, tab3b, tab3c };\n\n");

	char tab3a[] = { 1, 5, 0 };
	char tab3b[] = { 6, 2, 9, 8, 1, 0 };
	char tab3c[] = { 3, 4, 7, 0 };
	char *tab3[3] = { tab3a, tab3b, tab3c };

	printf("char *(*wsk6)       wskaznik na wskaznik o typie char\nchar *(*wsk7)[3]         wskaznik na wskaznik ktory wskazuje na trzyelementowa tablice typu char\n(a kazdy z tych elementow to osobny wiersz)\n\nwsk6 = tab3          adres pierwszego wiersza tablicy\nwsk7 = &tab3           adres tablicy 3 wierszowej o roznej liczbie kolumn\n\n");

	// Tu prosze dopisac deklaracje wskaznikow wsk6, wsk7

	char *(*wsk6);
	char *(*wsk7)[3];

	// Tu prosze nadac wartosci wskaznikom wsk6, wsk7

	wsk6 = tab3;
	wsk7 = &tab3;

	// Tu prosze dopisac wydruk wartosci wskaznikow tab3, wsk6, wsk7
	// oraz rozmiaru danych,  na ktore wskazuja.

	printf("    tab3 = %p    sizeof(tab3) = %d   sizeof(*tab3) = %d \n", tab3, sizeof(tab3), sizeof(*tab3));
	printf("    wsk6 = %p    sizeof(wsk6) = %d    sizeof(*wsk6) = %d \n", wsk6, sizeof(wsk6), sizeof(*wsk6));
	printf("    wsk7 = %p    sizeof(wsk7) = %d    sizeof(*wsk7) = %d \n\n", wsk7, sizeof(wsk7), sizeof(*wsk7));

	// Tu prosze dopisac wydruk wartosci elementu tablicy oznaczonego
	// kolorem szarym. odwolania do tego elementu prosze robic za pomoca
	// identyfikatora tab3 oraz wskaznikow wsk6, wsk7. W kazdym
	// przypadku prosze zrobic dwa warianty (z uzyciem notacji indeksowej 
	// oraz notacji wskaznikowej)                  

	printf("     tab3[2][1] = %d\n", tab3[2][1]);  // notacja indeksowa
	printf(" *(*(tab3+2)+1) = %d\n", *(*(tab3 + 2) + 1));  // notacja wskaznikowa
	printf("     wsk6[2][1] = %d\n", wsk6[2][1]);  // notacja indeksowa
	printf(" *(*(wsk6+2)+1) = %d\n", *(*(wsk6 + 2) + 1));  // notacja wskaznikowa
	printf("  wsk7[0][2][1] = %d\n", wsk7[0][2][1]);  // notacja indeksowa
	printf("*(*(*wsk7+2)+1) = %d\n", *(*(*wsk7 + 2) + 1));  // notacja wskaznikowa    
	printf("*(*(*wsk7+2)+2) = %d\n", *(*(*wsk7 + 2) + 2));
	printf("*(*((*wsk7+1)+1)+2) = %d\n", *(*((*wsk7 + 1) + 1) + 2));

	return 0;
}

/*
--------------------------------------------------------------------------------------------
Zadanie 1
Deklaracja zmiennej 	       Nazwa (s≥owny opis typu danych) 	            WielkoúÊ zajmowanej pamiÍci (B) 
-------------------------------------------------------------------------------------------------
double a; 	        zmienna typu double                                                 8 
-------------------------------------------------------------------------------------------------
 float x[3];	        3 elementowa tablica liczb typu float 	                            12
-------------------------------------------------------------------------------------------------
char *c; 	        wskaünik na zmiennπ typu char 					    4
-------------------------------------------------------------------------------------------------
 int *x[3];	        3 elementowa tablica wskaünikÛw na zmiennπ typu int                 12 
-------------------------------------------------------------------------------------------------
short (*e)[3]; 	        Wskaünik na 3 elementowπ tablicÍ typu short	                    4
-------------------------------------------------------------------------------------------------
int  *(*x[5])	        wskaünik na 5 elementowπ tablicÍ wskaünikÛw na liczby typu int 	    4
-------------------------------------------------------------------------------------------------
char *text; 	        wskaünik na poczπtek (pierwszy znak) ≥aÒcucha znakÛw 	            4
-------------------------------------------------------------------------------------------------
int tab[5]; 	        5 elementowa tablica typu int					    20
-------------------------------------------------------------------------------------------------
int *wsk=tablica	wskaünik na poczπtek (pierwszy element) tablicy liczb typu int 	    4 
-------------------------------------------------------------------------------------------------
int tab2[5][2]; 	dwuwymiarowa tablica liczb typu int o 5 wierszach po dwie kolumny   40 
-------------------------------------------------------------------------------------------------
short **wsk; 	        Wskaünik do wskaünika do typu short	 			    4
-------------------------------------------------------------------------------------------------
void (*fun)(); 	        wskaünik na bezparametrowπ funkcjÍ zwracajπcπ typ void              4 
-------------------------------------------------------------------------------------------------
float (*fun)(int); 	Wskaünik na funkcjÍ z parametrem int zwracajπcπ typ float	    4
-------------------------------------------------------------------------------------------------



Zadanie 3 

#include <stdio.h>

int main()
{
	int tab1[4][3] = { { 1,7,5 },{ 1,4,0 },{ 2,5,9 },{ 8,9,0 } };
	int (*wsk)[3];
	int x, y;
	wsk = tab1;
	printf("int tab1[4][3]\n{ 1,7,5 }\n{ 1,4,0 }\n{ 2,5,9 }\n{ 8,9,0 }\n\n");
	printf("Podaj numer wiersza: \n");
	scanf_s("%d", &x);
	while (x > 4 || x < 1)
	{ 
		printf("Podaj inny numer wiersza: "); 
	    scanf_s("%d", &x); 
	}
	printf("Podaj numer kolumny: \n");
	scanf_s("%d", &y);
	while (y > 3 || y < 1)
	{
		printf("Podaj inny numer kolumny: ");
		scanf_s("%d", &y);
	}
	x = x - 1; y = y - 1;
	printf("Zawartosc tablicy: %d\n", wsk[x][y]);
	printf("Zawartosc tablicy: %d\n", *(*(wsk+x)+y));
	printf("Zawartosc tablicy: %d\n",tab1[x][y]);
	printf("Zawartosc tablicy: %d\n\n", *(*(tab1+x)+y));

	char taba[] = { 1, 5, 0 };
	char tabb[] = { 6, 2, 9, 8, 1, 0 };
	char tabc[] = { 3, 4, 7, 0 };
	char *tab[3] = { taba, tabb, tabc };
	int t, z;
	char **wsk1;
	wsk1 = tab;
	printf("char *tab[3] = { taba, tabb, tabc }\n{ 1, 5, 0 }\n{ 6, 2, 9, 8, 1, 0 }\n{ 3, 4, 7, 0 }\n\n");
	printf("Podaj numer wiersza: \n");
	scanf_s("%d", &t);
	while (t > 3 || t < 1)
	{
		printf("Podaj inny numer wiersza: ");
		scanf_s("%d", &t);
	}
	printf("Podaj numer kolumny: \n");
	scanf_s("%d", &z);
	while (t==1 && z>3 ||t==2 && z>6 || t==3 && z>4 || z<1)
	{
		printf("Podaj inny numer kolumny: ");
		scanf_s("%d", &z);
	}
	t = t - 1; z = z - 1;
	
	printf("Zawartosc tablicy: %d\n", tab[t][z]);
	printf("Zawartosc tablicy: %d\n", *(*(tab + t) + z));
	printf("Zawartosc tablicy: %d\n", wsk1[t][z]);
	printf("Zawartosc tablicy: %d\n", *(*(wsk1 + t) + z));

	return 0;
}

--------------------------------------------------------------------------------
Zadanie 4

#include <stdio.h>

int main()
{
	int tab1[4][3] = { { 1,7,5 },{ 1,4,0 },{ 2,5,9 },{ 8,9,0 } };
	printf("{ 1, 7, 5 }\n{ 1, 4, 0 }\n{ 2, 5, 9 }\n{ 8, 9, 0 }\n\n");

	int (*wsk)[3];
	wsk = tab1;
	int max;
	max = **wsk;

	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", *(*(wsk + i) + j));
			if (*(*(wsk + i) + j) > max)
			{
				max = *(*(wsk + i) + j);
			}
		}
		printf("Max: %d\n\n", max);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (*(*(wsk + i) + j) == max)
			{
				printf("Max Tab[%d][%d]: %d\n", i, j, *(*(wsk + i) + j));
			}
		}
	}
		
	

	return 0;
}
--------------------------------------------------------------------------------------------------------
Zadanie 5

#include <stdio.h>

int main()
{
	char taba[] = { 1, 5, 0 };
	char tabb[] = { 6, 2, 9, 8, 1, 0 };
	char tabc[] = { 3, 4, 7, 0 };
	char *tab[3] = { taba, tabb, tabc };
	printf("char tab3a[] = { 1, 5, 0 } \nchar tab3b[] = { 6, 2, 9, 8, 1, 0 };\nchar tab3c[] = { 3, 4, 7, 0 };\nchar *tab3[3] = { tab3a, tab3b, tab3c };\n\n");

	char *(*wsk);
	wsk = tab;
	char max;
	max = **wsk;

	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; (*(*(wsk + i) + j) != 0); j++)
		{
			printf("%d\n", *(*(wsk + i) + j));
			if (*(*(wsk + i) + j) > max)
			{
				max = *(*(wsk + i) + j);
			}
		}
		printf("Max: %d\n\n", max);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; (*(*(wsk + i) + j)!= 0); j++)
		{
			if (*(*(wsk + i) + j) == max)
			{
				printf("Max Tab[%d][%d]: %d\n", i, j, *(*(wsk + i) + j));
			}
		}
	}
		
	

	return 0;
}
*/