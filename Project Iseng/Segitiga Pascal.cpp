#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

int baris;
int i;
int j;
int p;
int s;
	
	cout<<"Masukkan baris segitiga: ";
	cin>>baris;
	
	for (i = 0; i<baris; i++)
	{	
		for (s = 0; s<=baris *2 - i * 2; s++)
		{
			cout<<" ";
		}
		
		for (j = 0; j<=i; j++)
		{
			if (j == 0 || j == i)
			{
			p = 1;
			}
				else
				{
				p = p * (i + 1 - j) / j;
				}
		cout<<" "<<p<<" ";
		}
		
	cout<<endl;
	}

getch();
}
