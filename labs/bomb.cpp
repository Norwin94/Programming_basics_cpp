#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;
int i;
int main()
 {
	 for (int i=10; i>=0; i --)
	 {
		 Sleep(1000);
		 system("cls");
		 cout << i <<endl;
	 }
   if (i <= 0) system("cls");
	 	 cout << "BUUUM" <<endl;
		system("pause >nul");


 }