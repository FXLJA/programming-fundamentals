#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
int i;
int nilai[5];
int *pointer;
pointer = nilai;

	for(i=1; i<=5; i++)
	{
	cout<<"Masukan nilai array: ";
	cin>>nilai[i];
	}
	
	cout<<endl;
	
	cout<<"Hasil Pengaksesan Elemen Array Lewat Pointer";
	cout<<endl;
	cout<<endl;
	
	for(i = 1; i<=5; i++)
	{
	cout<<"Elemen ke-"<<i<<": Nilai: "<<nilai[i];
	cout<<", Menempati alamat memori "<<&pointer[i]<<endl;
	}

getch();
}  
