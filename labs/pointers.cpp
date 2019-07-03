#include <stdio.h>
#include <string.h>			

int Strlen(char *text);
char* Strcpy(char *x, char *y);
char* Strupr(char*text);
char* Usun_Male(char *t);
int MczyD(char *t);
char* Usun_Spacje(char *text);
char* Usun_Minus(char *t);
char* Dodaj_Spacje(char *t);
char* Usun_Komentarz(char *t);
void Czytaj_Liczby(char *t);

int main()
{
	char* liczby = "100   -8    64    2     78";
	char wyraz[100] = "Kazdy ma siebie // dosc czasami";
	printf("%s\n", Usun_Komentarz(wyraz));
	Czytaj_Liczby(liczby);
	

	
	return 0;
}
char* Strcpy(char *x, char *y)
{
	char *p = x;
	while (*x++ = *y++);
	return p;
}
char* Usun_Male(char *t)
{
	char *p = t;
	while (*t != '\0')
	{
		if (*t >= 'a' && *t <= 'z')
		{
			Strcpy(&*t, &*(t + 1));
		}
		else *t++;
	}
	return p;
}
int Strlen(char *text)
{
	int i = 0;
	while (*text++ != '\0')
	{
		i++;
	}
	return i;
}
char* Strupr(char*text)
{
	while (*text != '\0')
	{
		if (*text >= 'a'&&*text <= 'z')
		{
			*text -= 32;
		}
		else *text++;
	}
	return text;
}
int MczyD(char *t)
{
	int i = 0;
	while (*t != '\0')
	{
		if (*t >= 'A'&&*t <= 'Z')
		{
			i++;
		}
		if (*t >= 'a'&&*t <= 'z')
		{
			i--;
		}
		*t++;
	}
	return i;
}
char* Usun_Spacje(char *text)
{
	char *p = text;
	while (*text != '\0')
	{
		if (*text == ' '&&*(text + 1) == ' ')
		{
			Strcpy(&*(text), &*(text + 1));
		}
		else
		{
			*text++;
		}
	}
	return p;
}
char* Usun_Minus(char *t)
{
	char*p = t;
	while (*t != 0 && *t != '-')
	{
		*t++;
		if (*t == '-')
			Strcpy(&*(t), &*(t + 1));
	}
	return p;
}
char* Dodaj_Spacje(char *t)
{
	for(int i=strlen(t)-1; i>=0;i--)
	{
		t[i+5]=t[i];
	}
	for (int i = 0; i<5; i++)
	{
		t[i] = ' ';
	}
	return t;
}
char* Usun_Komentarz(char *t)
{
	char *p = t;
	while(*t!='\0')
	{
		if (*t == '/' && *(t+1)=='/')
		{
			while (*t != '\0')
			{
				*t = 0;
		   }
		}
		else *t++;
	}
	return p;
}
void Czytaj_Liczby(char *t)
{
	int
		i = 0,
		sign,
		number,
		size = strlen(t);

	// wczytujesz kolejne znaki w tablicy liczby
	while (i < size)
	{

		// pomijasz spacje
		while (t[i] == ' ') i++;

		// sprawdzasz czy wystêpuje znak minusa
		sign = 0;
		if (t[i] == '-') {
			sign = 1;
			i++;
		}

		//wczytujesz liczbê
		number = 0;
		while (t[i] > 47) number = number * 10 + t[i++] - 48;
		i++;

		// sprawdzasz czy wyst¹pi³ znak minusa
		if (sign == 1) {
			number *= -1;
		}

		// wypisujesz liczbê
		printf("%d ", number);

	}
}