#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char nama[50];
int nim;
int pilih;

	void data()
	{
	system("cls");
	cout<<"\tMasukkan Data Mahasiswa"<<endl;     
	cout<<"Nama : ";
	cin.ignore(); 
	cin.getline(nama,50);
	cout<<"NIM  : "; 
	cin>>nim;
	cout<<"Data tercatat";
	} 

	void krs()
	{
	menu2:
	system("cls");
	cout<<"\tPembayaran BPS\n";
	cout<<"1. Paket\n";
	cout<<"2. Non Paket\n";
	cout<<"3. Belum Bayar\n";
	cout<<"Pilihan Anda : "; 
	cin>>pilih; 
	
		if (pilih == 1)
		{
		cout<<"-------------------------------------------------------------------------------------------------------\n";
		cout<<"MATA KULIAH"<<"\t\t\t"<<"SKS"<<"\t"<<"DOSEN"<<"\t\t\t\t\t\t"<<"KELAS"<<"\t"<<"RUANG\n";
		cout<<"-------------------------------------------------------------------------------------------------------\n";
		cout<<"PEMROGRAMAN DASAR"<<"\t\t"<<" 4"<<"\t"<<"Lukman Hakim, S.T., M.Kom."<<"\t\t\t"<<"1PTI2"<<"\t"<<"LAB B\n";
		cout<<"PEMROGRAMAN DASAR"<<"\t\t"<<" 4"<<"\t"<<"Lukman Hakim, S.T., M.Kom."<<"\t\t\t"<<"1PTI2"<<"\t"<<"R707\n";
		cout<<"PENGANTAR SISTEM DIGITAL"<<"\t"<<" 2"<<"\t"<<"Teady Matius Surya Mulyana, S.Kom., M.Kom."<<"\t"<<"1PTI2"<<"\t"<<"R709\n\n";
		cout<<"KALKULUS"<<"\t\t\t"<<" 2"<<"\t"<<"Wahyu Hidayat, S.Si., M.Si."<<"\t\t\t"<<"1PTI2"<<"\t"<<"R402\n";
		cout<<"PENGANTAR TEKNOLOGI INFORMASI"<<"\t"<<" 2"<<"\t"<<"Teady Matius Surya Mulyana, S.Kom., M.Kom."<<"\t"<<"1PTI2"<<"\t"<<"LAB C\n\n";
		cout<<"BAHASA INGGRIS 1"<<"\t\t"<<" 2"<<"\t"<<"Bayu Anggara Sajangbati, S.S., S.Pd."<<"\t\t"<<"1PTI2"<<"\t"<<"R403\n";
		cout<<"AGAMA & ETIKA"<<"\t\t\t"<<" 2"<<"\t"<<"Candra Tandi Reinhard Siagian, S.Fil., M.Phil."<<"\t"<<"1PUM12"<<"\t"<<"R406\n\n";  
		cout<<"ALGORITMA"<<"\t\t\t"<<" 4"<<"\t"<<"Kristien Margi Suryaningrum, S.Kom., M.Cs."<<"\t"<<"1PTI2"<<"\t"<<"R510\n";
		cout<<"ALGORITMA"<<"\t\t\t"<<" 4"<<"\t"<<"Kristien Margi Suryaningrum, S.Kom., M.Cs."<<"\t"<<"1PTI2"<<"\t"<<"LAB C\n";
		cout<<"-------------------------------------------------------------------------------------------------------\n\n";
		cout<<"TOTAL : 18 SKS\n";
		
		getch();
		}
			else if (pilih == 2)
			{
			system("cls");
			cout<<"\nPilihan Tidak Tersedia\n";
			getch();
			goto menu2;
			}
			
			else if (pilih == 3)
			{
			system("cls");
			cout<<"\tHarap segera melakukan pembayaran";
			getch();
			}
			
				else 
				{
				cout<<"Pilihan salah\n";
				getch();
				goto menu2;
				}  
	}	

	void cetak()
	{
	int cetak;
	
	system("cls");
	cout<<"\nNama Mahasiswa : "<<nama<<endl;
	cout<<"NIM            : "<<nim<<endl;
	cout<<"Pilihan Paket  : ";
	
		if(pilih == 1)
		{
		cout<<"PAKET 18 SKS"<<endl;
		}
			else if(pilih == 2)
			{
			cout<<"NON PAKET"<<endl;
			}
	
	cout<<endl;
	
	cout<<endl;	
	cout<<"Cetak KRS?"<<endl;
	cout<<"1: Ya"<<endl;
	cout<<"0: Tidak"<<endl;
	cout<<"Pilihan Anda: ";
	cin>>cetak;
		if (cetak == 1)
		{
		cout<<"Print Data\n";
		}
	
	getch();
	}

//Main Program
int main()
{
int menu;

	menu1:
	system("cls");
	cout<<"1. Input Data Mahasiswa\n";
	cout<<"2. Pemilihan Paket KRS\n";
	cout<<"3. Cetak Data\n";
	cout<<"4. Keluar\n";
	cout<<"Pilihan Anda : "; 
	cin>>menu;

	switch(menu) 
	{
		case 1:
		{
		data();
		getch();
		goto menu1;
		break;
		}
		
		case 2:
		{
		krs();
		goto menu1;
		break;
		}
		
		case 3:
		{
		cetak();
		break;
		}
		
		case 4:
		{
		cout<<"\tTerima Kasih";
		getch();
		break;
		}
		
		default:
		{
		cout<<"Pilihan salah\n";
		getch();
		goto menu1;
		}
	}

getch();
}
