#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

int awal;
int jual;
int lahir;
int harga = 2500000;
int sisa;
int pendapatanminggu;
int pendapatanbulan;

	cout<<"Masukkan jumlah awal ternak: ";
   	cin>>awal;
   	cout<<"Masukkan jumlah ternak yang dijual: ";
    cin>>jual;
    cout<<"Masukkan jumlah ternak yang lahir: ";
    cin>>lahir;
   		sisa=awal-jual+lahir;
      	cout<<"Sisa ternak: "<<sisa;
      	cout<<endl;
      		pendapatanminggu=jual*harga;
         	cout<<"Pendapatan minggu ini: "<<pendapatanminggu;
         	cout<<endl;
         		pendapatanbulan= pendapatanminggu*4;
            	cout<<"Pendapatan bulan ini: "<<pendapatanbulan;

getch();

}
