
//Æw. 1 c)                                            // Æw. 1 b) 
                                                   
#include <stdio.h>                                      // #include <stdio.h>

int main()                                            //   int main()
{                                                      //  {
	int wiersz, kolumna;                              //  int wiersz, kolumna;
	wiersz = 1;                                       //  wiersz = 1;
	kolumna = 1;                                     //   kolumna = 1;      
	for (wiersz=1; wiersz < 10;)                     //   while (wiersz < 10)    
	{                                                //   {
		printf("%3d", kolumna);                         //    printf("%3d", kolumna);       
		if (wiersz == kolumna)                          //    if (wiersz == kolumna)
		{                                              //     {
			wiersz++;                                   //      wiersz++;
			kolumna = 0;                               //       kolumna = 0;
			printf("\n");                              //       printf("\n");
		}                                            //       }
		kolumna++;                                   //       kolumna++;
	}                                                //   }              
                                                                       
	return 0;                                         //  return 0;                                  

}                                                       //  } 
//-----------------------------------------------------------------------------------------------
/*
1 d)

#include <stdio.h>

int main()
{
	int wiersz, kolumna, i;
	wiersz = 1;
	kolumna = 1;
	for (wiersz = 1; wiersz <10; wiersz++)
	{
		for (kolumna = 1; kolumna <= wiersz; kolumna++)
		{
			printf("%3d", kolumna);
		}
		printf("\n");

	}
	return 0;

}
----------------------------------------------------------------------------------------------------
1 e)
#include <stdio.h>

int main()
{

	int wiersz, kolumna;
	wiersz = 1;
	kolumna = 1;
   do
	{
		printf("%3d", kolumna);
		if (wiersz == kolumna)
		{
			wiersz++;
			kolumna = 0;
			printf("\n");
		}
		kolumna++;
   } while (wiersz < 10);

	return 0;
}
-------------------------------------------------------------------------------------------

2 a) 1

#include <stdio.h>

int main()                                               
{
	{
		int i, n, p=1;                                                                               
		scanf("%d", &n);
		for (i = 1; i <= n;)
		{
		   printf("#");                             
			if (i == p)                            
				{
				     i++;
				     p = 0;                                      
				     printf("\n");                                    
			        }
			p++;                                         			
		}

		return 0;                                           

	}

}
---------------------------------------------------------------------------------------------------
2 a) 2


#include <stdio.h>

int main()
{
	int i, n, p;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (p = 1; p <= n + 1 - i; p++)
		{
			printf("#");
			if (p == n + 1 - i)
			{
				printf("\n");
			}
		}
	}



	return 0;
}

------------------------------------------------------------------------------------------------------
2 a) 3

#include <stdio.h>

int main()
{
	int i, j, h;
	scanf("%d", &h);

	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= h - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("#");
		}
		printf("\n");

	}



	return 0;
}
-------------------------------------------------------------------------------------------------------------
2 b) 

#include <stdio.h>

int main()
{
	int i, k, h;

	printf("Podaj wysokosc liter: ");
	scanf("%d", &h);

	

	for (i = 1; i <= h; i++)
	{
		printf("#");
			for (k = 1; k <= i - 2; k++)
			{
				printf("-");
			}
			if (i > 1 && i <=h)
				printf("#");
			for (k = (h-1)*2; k >=2*i; k--)
			{
				printf("-");	
			}
			if(i>0&&i<h)
				printf("#");
			for (k = 1; k <= i - 2; k++)
			{
				printf("-");
			}
			if(i>1 && i<=h)
				printf("#");
			for (k = 1; k < h; k++)
			{
				printf("-");
			}
			//---------------------------------------------------------------------- N
				printf("#");
			for (k = 1; k <= i - 2; k++)
			{
				printf("-");
			}
			if (i>1&&i<h)
				printf("#");
			for (k = h; k > i+1; k--)
			{
				printf("-");
			}
			if(i>0 && i <=h)
			printf("#");
			for (k = 1; k < h; k++)
			{
				printf("-");
			}
			//---------------------------------------------------------------------- Z
			if (i == 1 || i == h)
				for (k = 1; k < h; k++)
				{
					printf("#");
				}
			if (i>1 && i<h)
				for (k = h; k > i; k--)
				{
					printf("-");
				}
			printf("#");
		printf("\n");
	}
	
	return 0;
}





#include <stdio.h>															
#include <math.h>


int main()
{
	int i, h;
	char x;

	for (i=1;i<5;i++)
	{
		for (x = 'A'; x <'F'-i; x++)
		{
			printf("%c", x);
		}
		printf("\n");
	}


	return 0;
}
*/