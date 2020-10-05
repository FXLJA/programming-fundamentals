#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

	int h_sewa (int durasi, int sewa)
	{
	return (durasi * sewa);
	}
	
	int total (int sewa, int denda)
	{
	return(sewa + denda);
	}
	
	int denda(int durasi)
	{
		if(durasi <= 7)
		{
		return(0);
		}
			else 
			{
			return((durasi - 7) * 100);
			}
	}

int main()
{
int golongan;
int durasi;
int sewa;
int pilih;

	Start:
	system("cls");
	cout<<"Masukan Golongan Buku (1 s/d 3): "; 
	cin>>golongan; 
	cout<<"Masukan Durasi Pinjaman: "; 
	cin>>durasi;
	
	switch(golongan)
	{ //Open scope switch case
		case 1:
		{
		sewa = 2000;
		break;
		}
		
		case 2:
		{
		sewa = 2500;
		break;
		}
		
		case 3:
		{
		sewa = 1500;
		break;
		}
	} //Close scope switch case
	cout<<endl;
	
	cout<<"Golongan Buku    : "<<golongan<<endl;
	cout<<"Lama Sewa        : "<<durasi<<" hari"<<endl;
	cout<<"Harga Sewa       : Rp "<<h_sewa(durasi,sewa)<<endl;
	cout<<"Denda            : Rp "<<denda(durasi)<<endl;
	cout<<"Total Pembayaran : Rp "<<total(h_sewa(sewa,durasi),denda(durasi))<<endl;
	cout<<endl;
	
	cout<<"Ingin melakukan peminjaman lagi?"<<endl; 
	cout<<"1 = Ya"<<endl;
	cout<<"0 = Tidak"<<endl;
	cout<<"Pilihan Anda: ";
	cin>>pilih;
		if (pilih == 1)
		{
		goto Start;
		}
			else
			if (pilih == 0)
			{
			return 0;
			}

getch();
}
