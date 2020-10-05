#include <iostream>
#include <conio.h>

using namespace std;

float luas (int alas, int tinggi)
      {
      return (0.5 * alas * tinggi);
      }

int main()

{
int a;
int b;

	cout<<"Masukkan nilai alas: ";
	cin>>a;
	cout<<"Masukkan nilai tinggi: ";
	cin>>b;
	cout<<"Luas: "<<luas(a,b)<<endl;

getch();
}
