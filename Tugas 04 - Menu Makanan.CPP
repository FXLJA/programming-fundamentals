#include <iostream>
#include <conio.h>

using namespace std;

main()

{

int pilih;
int hargamakanan;
int hargaminuman;
int jumlahmakanan;
int jumlahminuman;
long total;

	cout<<"Menu Makanan";
   	cout<<endl;
	cout<<"1. Paket 1		Rp.21.000";
   	cout<<endl;
	cout<<"2. Paket 2		Rp.21.000";
   	cout<<endl;
	cout<<"3. Paket 3		Rp.23.000";
   	cout<<endl;
	cout<<"4. Paket 4		Rp.17.000";
   	cout<<endl;

   cout<<endl;

	cout<<"Menu Minuman";
   	cout<<endl;
   	cout<<"1. Es Teh Manis		Rp.3.000";
   	cout<<endl;
   	cout<<"2. Es Teh Tawar		Rp.2.000";
   	cout<<endl;
   	cout<<"3. Teh Manis Hangat	Rp.2.000";
   	cout<<endl;
   	cout<<"4. Teh Tawar Hangat	Rp.1.000";
   	cout<<endl;
   	cout<<"5. Aqua		  	Rp.3.000";
   	cout<<endl;

    cout<<endl;

		cout<<"Masukkan pilihan Paket: ";
        cin>>pilih;
   		cout<<"Masukan pilihan Minuman: ";
        cin>>pilih;
			switch(pilih)
         	{
   			case 1:
            	{
               	cout<<"Nasi + Ayam Geprek + Tempe";
   		 		cout<<endl;
   		 		cout<<"Masukkan harga paket: ";
               	cin>>hargamakanan;
          		cout<<"Masukkan harga minuman: ";
               	cin>>hargaminuman;
          		cout<<"Jumlah paket: ";
               	cin>>jumlahmakanan;
          		cout<<"Jumlah minuman: ";
               	cin>>jumlahminuman;
          		total= hargamakanan * jumlahmakanan+hargaminuman * jumlahminuman;
          		cout<<"Total Harga: "<<total;
   				break;
   				}
   		   			case 2:
            		{
               		cout<<"Nasi + Ayam Goreng + Tahu";
               		cout<<"Masukkan harga paket: ";
               		cin>>hargamakanan;
          			cout<<"Masukkan harga minuman: ";
               		cin>>hargaminuman;
          			cout<<"Jumlah paket: ";
               		cin>>jumlahmakanan;
          			cout<<"Jumlah minuman: ";
               		cin>>jumlahminuman;
          			total= hargamakanan * jumlahmakanan + hargaminuman * jumlahminuman;
          			cout<<"Total Harga: "<<total;
   					break;
   					}
   						case 3:
                        {
                        cout<<"Nasi + Rendang + Tahu";
               			cout<<"Masukkan harga paket: ";
               			cin>>hargamakanan;
          				cout<<"Masukkan harga minuman: ";
               			cin>>hargaminuman;
          				cout<<"Jumlah paket: ";
               			cin>>jumlahmakanan;
          				cout<<"Jumlah minuman: ";
               			cin>>jumlahminuman;
          				total= hargamakanan * jumlahmakanan + hargaminuman * jumlahminuman;
          				cout<<"Total Harga: "<<total;
   						break;
                        }
                        	case 4:
                            {
                            cout<<"Nasi + Sayur Asem + Ikan Asin";
               				cout<<"Masukkan harga paket: ";
               				cin>>hargamakanan;
          					cout<<"Masukkan harga minuman: ";
               				cin>>hargaminuman;
          					cout<<"Jumlah paket: ";
               				cin>>jumlahmakanan;
          					cout<<"Jumlah minuman: ";
               				cin>>jumlahminuman;
          					total= hargamakanan * jumlahmakanan + hargaminuman * jumlahminuman;
          					cout<<"Total Harga: "<<total;
   							break;
                            }
   								case 5:
                                {
                                cout<<"Minuman";
                                cout<<endl;
   		 						cout<<"Masukkan harga paket: ";
               					cin>>hargamakanan;
          						cout<<"Masukkan harga minuman: ";
               					cin>>hargaminuman;
          						cout<<"Jumlah paket: ";
               					cin>>jumlahmakanan;
          						cout<<"Jumlah minuman: ";
               					cin>>jumlahminuman;
                                total= hargamakanan * jumlahmakanan + hargaminuman * jumlahminuman;
          						cout<<"Total Harga: "<<total;
                           break;
                                }

   									default:
                                	{
                                	cout<<"Pilihan Salah";
   		  							}

             }

getch();

}
