#include <stdio.h>
#include <conio.h>
int main()
{
	int wszystkie = 0;
	int male = 0;
	int duze = 0;
	int cyfry = 0;
	int reszta = 0;
	char napis;

	printf("Podaj ciag znakow: (gdy skonczysz, wcisnij ESC)\n\n");
	do
	{
		napis = getch();
		printf("%c", napis);
		wszystkie++;
		if (napis >= 'A' && napis <= 'Z')
		{
			duze++;
		}
		if (napis >= 'a' && napis <= 'z')
		{
			male++;
		}
		if (napis >= '0' && napis <= '9')
		{
			cyfry++;
		}
		if (napis == 13)
		{
			printf("\n");
		}
		
		
		reszta = wszystkie - (duze + male + cyfry)-1;

	} while (napis != 27);

	printf("\n\nMale litery: %d", male);
	printf("\nDuze litery: %d", duze);
	printf("\nCyfry: %d", cyfry);
	printf("\nPozostale znaki: %d\n", reszta);

	return 0;
}