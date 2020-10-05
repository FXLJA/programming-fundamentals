#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
int h = 0;
int m = 0;
int s = 0;

	//Input user
    cout<<"\t\tProgram Timer + Alarm\n\n\n\n";
    cout<<"Masukkan waktu awal"<<endl;
    cout<<"Jam: ";
    cin>>h;
    cout<<"Menit: ";
    cin>>m;
    cout<<"Detik: ";
    cin>>s;
	cout<<endl;
	
	cout<<"\n\t\t PRESS ANY KEY TO START";
	
	cout<<"\n\t\t\t"<< h <<" : "<< m <<" : "<< s;
	
	
	if (!(h==0 && m== 0 && s==0))
	{
	getch();
		while (!kbhit())
		{
		s--;
		Sleep(1000);
			if(s<0)
			{
			m--;
			s = 59;
			}
		
			if (m<0)
			{
			h--;
			m = 59;
			}
			
		system("cls");
		
		cout<<"\n\n\n\t\t\t\t  TIMER";
		cout<<"\n\t\t\t\t"<< h <<" : "<< m <<" : "<< s;

			if(h <= 0 && m <= 0 && s <= 0)
			{
			cout<<"\n\n\t\t\t\tBangun woi!!";
			system("start vlc.exe Alarm.mp3");
			getch();
			break;
			}
		}
	}
}
