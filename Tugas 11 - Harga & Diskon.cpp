#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>

using namespace std;

main()

{

string namabarang;
int bruto;
int n;
int diskon;
int netto;

   cout<<"Masukkan nama barang: ";
   cin>>namabarang;
   cout<<endl;
   cout<<"Masukkan harga barang: ";
   cin>>bruto;
   cout<<endl;
   cout<<"Masukkan diskon (%): ";
   cin>>n;
   cout<<"-------------------------------"<<endl;
   cout<<endl;
      diskon = n*0.01*bruto;
   	  cout<<"Besar diskon: "<<diskon;
      cout<<endl;
   	  	netto=bruto-diskon;
        cout<<"Harga total: "<<netto;

getch();

}
