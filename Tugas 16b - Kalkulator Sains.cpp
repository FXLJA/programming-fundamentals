#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cmath>
#define PI 3.14

using namespace std;

int main()
{
int a;
int b;
int x;
int y;
int hasil;
float sinx;
float cosx;
float tanx;
int pilih_kalkulator;
int pilih_trigonometri;
int pilih_eksponen;
int pilih_aritmatika;
int pilih_ulang;
	
	Start:
	cout<<"Jenis Kalkulator"<<endl;
	cout<<endl;
	
	cout<<"1.	Kalkulator Trigonometri"<<endl;
	cout<<"2.	Kalkulator Eksponen"<<endl;
	cout<<"3.	Kalkulator Aritmatika"<<endl;
	cout<<"Pilihan Anda: ";
	cin>>pilih_kalkulator;
	
	switch (pilih_kalkulator)
	{
		case 1:
		{
		system ("cls");
		cout<<"Kalkulator Trigonometri"<<endl;
		cout<<"1.	Sinus"<<endl;
		cout<<"2.	Cosinus"<<endl;
		cout<<"3.	Tangen"<<endl;
		cout<<"Pilihan Anda: ";
		cin>>pilih_trigonometri;
		
			switch (pilih_trigonometri)
			{
				case 1:
				{
				cout<<"Masukkan sudut: ";
				cin>>x;
				cout<<"Sin x = "<<sin(x);
				break;
				}
				
				case 2:
				{
				cout<<"Masukkan sudut: ";
				cin>>x;
				cout<<"Cos x = "<<cos(x);
				break;
				}
				
				case 3:
				{
				cout<<"Masukkan sudut: ";
				cin>>x;
				cout<<"Tan x = "<<tan(x);
				break;
				}
			} //Close scope switch pilih_trigonometri
		break;
		} //Close scope menu Kalkulator Trigonometri
		
		case 2:
		{
		system ("cls");
		cout<<"Kalkulator Eksponen"<<endl;
		cout<<"1.	Akar"<<endl;
		cout<<"2.	Pangkat"<<endl;
		cout<<"Pilihan Anda: ";
		cin>>pilih_eksponen;
			
			switch (pilih_eksponen)
			{
				case 1:
				{
				cout<<"Masukkan angka: ";
				cin>>x;
				cout<<"Akar = "<<sqrt(x);
				break;
				}
				
				case 2:
				{
				cout<<"Masukkan angka: ";
				cin>>x;
				cout<<"Masukkan pangkat: ";
				cin>>y;
				cout<<"Pangkat = "<<pow(x,y);
				break;
				}
			}
		break;
		}
		
		case 3:
		{
		system ("cls");
		cout<<"Kalkulator Aritmatika"<<endl;
		cout<<"1.	Penjumlahan"<<endl;
		cout<<"2.	Pengurangan"<<endl;
		cout<<"3.	Perkalian"<<endl;
		cout<<"4.	Pembagian"<<endl;
		cout<<"5.	Modulus"<<endl;
		cout<<"Pilihan Anda: ";
		cin>>pilih_aritmatika;
			
			switch (pilih_aritmatika)
			{
				case 1:
				{
				cout<<"Masukkan angka pertama: ";
				cin>>a;
				cout<<"Masukkan angka kedua: ";
				cin>>b;
				hasil = a + b;
				cout<<"Hasil: "<<hasil;
				break;
				}
				
				case 2:
				{
				cout<<"Masukkan angka pertama: ";
				cin>>a;
				cout<<"Masukkan angka kedua: ";
				cin>>b;
				hasil = a - b;
				cout<<"Hasil: "<<hasil;
				break;
				}
				
				case 3:
				{
				cout<<"Masukkan angka pertama: ";
				cin>>a;
				cout<<"Masukkan angka kedua: ";
				cin>>b;
				hasil = a * b;
				cout<<"Hasil: "<<hasil;
				break;
				}
				
				case 4:
				{
				cout<<"Masukkan angka pertama: ";
				cin>>a;
				cout<<"Masukkan angka kedua: ";
				cin>>b;
				hasil = a / b;
				cout<<"Hasil: "<<hasil;
				break;
				}
				
				case 5:
				{
				cout<<"Masukkan angka pertama: ";
				cin>>a;
				cout<<"Masukkan angka kedua: ";
				cin>>b;
				hasil = a % b;
				cout<<"Hasil: "<<hasil;
				break;
				}
			}
		}
	} //Close scope switch pilih_kalkulator
	
	cout<<endl;
	cout<<endl;
	cout<<"Lagi?"<<endl;
	cout<<"1 = Ya"<<endl;
	cout<<"0 = Tidak"<<endl;
	cout<<"Pilihan Anda: ";
	cin>>pilih_ulang;
	
	if (pilih_ulang == 1)
	{
	system ("cls");
	goto Start;
	}
		else
		if (pilih_ulang == 0)
		{
		return 0;
		}
		
getch();
}
