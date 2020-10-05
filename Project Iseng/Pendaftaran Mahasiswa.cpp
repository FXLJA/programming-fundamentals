#include <iostream>
#include <conio.h>

using namespace std;

char nama [30];
int tahun_masuk;
int kodeF;
int kodeJ;
long nomor_urut;
int nilai;
long uang_masuk;
long total;

//Pengumpulan data
void data()
{	
	cout<<"Nama lengkap \t\t: ";
	cin.getline(nama, 30);
	
	cout << "Tahun masuk \t\t: ";
	cin >> tahun_masuk;
	
	cout << "Kode fakultas \t\t: ";
	cin >> kodeF;
			
	cout << "Kode jurusan \t\t: ";
	cin >> kodeJ;

	cout << "Nomor urut pendaftaran \t: ";
	cin >> nomor_urut;
	
	cout << "Nilai tes masuk \t: ";
	cin >> nilai;
	
	cout<<endl;
}

//Perhitungan biaya
void biaya()
{		
	if (kodeJ == 11)
	{
		uang_masuk = 30000000;
	}
		else if (kodeJ == 21)
		{
			uang_masuk = 32000000;
		}
	
		else if (kodeJ == 12)
		{
			uang_masuk = 32000000;
		}
		
		else if (kodeJ == 22)
		{
			uang_masuk = 28000000;
		}
		
	if (nilai >= 85 && nilai <= 100)
	{
		total = uang_masuk - 0.3 * uang_masuk;
	}
		else if (nilai >= 80 && nilai < 85)
		{
			total = uang_masuk - 0.15 * uang_masuk;
		}
			else
			{
				total = uang_masuk;
			}
}

//Output
void output()
{
	cout << "Nama Mahasiswa \t:" << "\t" << nama << endl;
	cout << "NIM \t\t:" << "\t" << tahun_masuk - 2000 << kodeF <<kodeJ << nomor_urut << endl;
		if (kodeF == 1)
		{
			cout << "Fakultas \t: \tTeknik" << endl;
		}
			else if (kodeF == 2)
			{
				cout << "Fakultas \t: \tPertanian" << endl;
			}
		if (kodeJ == 11)
		{
			cout << "Jurusan \t: \tTeknik Informatika" << endl;
		}
			else if (kodeJ == 21)
			{
				cout << "Jurusan \t: \tSistem Informasi" << endl;
			}
			
			else if (kodeJ ==12)
			{
				cout << "Jurusan \t: \tAgroteknologi" << endl;
			}
			
			else if (kodeJ == 22)
			{
				cout << "Jurusan \t: \tKehutanan" << endl;
			}
			
	if (nilai >= 85 && nilai <= 100)
	{
		cout << "Diskon \t\t: \t30 %" << endl;
		cout << "Total biaya \t: "<< total << endl;
	}
		else if (nilai >= 80 && nilai < 85)
		{
			cout << "Diskon \t\t: \t15 %" << endl;
			cout << "Total biaya \t: "<< total << endl;
		}
			else
			{
				cout << "Diskon \t: \t0 %" << endl;
				cout << "Total biaya \t: "<< "\t" << total << endl;
			}
}

//Main Program
int main()
{
	data();
	biaya();
	output();
	
getch();
}
