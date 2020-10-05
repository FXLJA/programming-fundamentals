#include <iostream>
#include <conio.h>

using namespace std;

main()

{

int nilai [5];
float jumlah;
float rata2;
int n;
int i;

   cout<<"Masukkan nilai batas: ";
   cin>>n;
		for (i=0; i<n; i++)
   		{
   		cout<<"Masukkan nilai ke- "<<(1+i)<<"= ";
   		cin>>nilai[i];
   		}
		jumlah = 0;
   			for (i=0; i<5; i++)
   			{
   			jumlah = nilai[i]+ jumlah;
   			rata2 = jumlah/5;
         	}
         cout<<"Nilai rata-rata: "<<rata2;

getch();

}
