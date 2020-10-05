#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()

{
double tinggibadan;
double psikotes;
double testulis;
double hasil;

	cout<<"Masukkan nilai tinggi badan: ";
	cin>>tinggibadan;
	cout<<"Masukkan nilai psikotest: ";
	cin>>psikotes;
	cout<<"Masukkan nilai test tulis: ";
	cin>>testulis;
   	cout<<endl;
	hasil = tinggibadan+psikotes+testulis;
		if (tinggibadan>=155 && psikotes >=77 && testulis>=75)
		{
		cout<<"ACCEPTED";
		}
			else
			{
			cout<<"REJECTED";
			}

getch();
return 0;
}
