#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
int pilih;
int loop;
	
	Start:
	system("cls");
	cout<<"\n\n\t\t\t\tMessing With Time"<<endl;
	cout<<endl;
	cout<<"\t\t\tJason Alexander"<<"\t\t"<<"32180082"<<endl;
	cout<<"\t\t\tMatthew Sebastian"<<"\t"<<"32150062"<<endl;
	cout<<"\t\t\tYohanes Irvan"<<"\t\t"<<"32150077"<<endl;
	cout<<endl;
	
	cout<<"1. Program Jam Digital"<<endl;
	cout<<"2. Program Stopwatch"<<endl;
	cout<<"3. Program Timer + Alarm"<<endl;
	cout<<endl;
	
	cout<<"Pilihan Anda: ";
	cin>>pilih;
	
	switch (pilih)
	{
		case 1:
		{
		system("start Jam.exe");
		break;
		}
		
		case 2:
		{
		system("start Stopwatch.exe");
		break;
		}
		
		case 3:
		{
		system("start Alarm.exe");
		break;
		}
	}
	
	cout<<endl;
	cout<<"Lagi?"<<endl;
	cout<<"1: Ya"<<endl;
	cout<<"0: Tidak"<<endl;
	cout<<"Pilihan Anda: ";
	cin>>loop;	
		if (loop == 1)
		{
		goto Start;
		}
			else if (loop == 0)
			{
			return 0;
			}
			
getch();
}
