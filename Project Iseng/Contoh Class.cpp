#include <iostream>
#include <conio.h>
using namespace std;

	class persegi_panjang //Nama class = persegi_panjang
	{
	int panjang;
	int lebar;
	
		public: //Sifat classnya public
	    	void set_values (int,int); //Function (1)
	    	int luas() 
			{
			return panjang * lebar;
			}
	};

	void persegi_panjang::set_values (int x, int y) //Set values (Mencegah input user) & Function (2)
	{
	panjang = x;
	lebar = y;
	}

int main () //Main program
{
persegi_panjang rect; //Manggil object
rect.set_values (3,4); //Manggil Function 2
cout<<"Luas: "<<rect.luas(); //Manggil Function 1
getch();
}
