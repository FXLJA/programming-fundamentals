#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int bil;
int n;
int hasil;

	void rumus()
	{
		hasil = 1;
		
		for (bil = n; bil >= 1; bil--)
		{
		hasil= hasil * bil;
		}
	}

int main()
{
	Start:
	system ("cls");
	cout<<"Masukkan bilangan: ";
	cin>>n;
	
	cout<<endl;
	rumus();
	
	cout<<n<<"!: "<<hasil;
	
getch();
}
