#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

main()

{

int A;
int angka;

	A:
	cout<<"Masukkan angka: ";
	cin>>angka;
		if (angka >5)
		{
		system("cls");	
		goto A;
		}
			else
			{
			cout<<"Looping stop";
			}
	
getch();
	
}
