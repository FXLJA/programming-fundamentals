#include <iostream>
#include <conio.h>

using namespace std;

main()

{

int i;
int batas;
int pilih;

	do
	{
   	cout<<"Masukkan angka awal: ";
   	cin>>i;
	cout<<"Masukkan nilai pembatas: ";
   	cin>>batas;

	for(int i=0; i<batas; i++)
   	if(i%2==1)
   	{
    cout<<"Ganjil"<<endl;
    }
   		else if(i%2==0)
   		{
      	cout<<"Genap"<<endl;
      	}
   		cout<<endl;
   			cout<<"Tekan 1 untuk looping: ";
   			cin>>pilih;
   }
   while(pilih==1);

getch();

}
