#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float hasil (int x)
	{
	return (2 * pow (x,2) - 3 * x + 1);
	}

int main()
{

int x;

	cout<<"Masukkan nilai x: ";
	cin>>x;
	cout<<endl;
	
	cout<<"f(x) = 2x^2 - 3x + 1";
	cout<<endl;
	cout<<"Hasil fungsi: "<<hasil(x);

getch();
}
