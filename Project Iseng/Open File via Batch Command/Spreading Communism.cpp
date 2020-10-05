#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
int pilih;
	
	Start:
    cout<<"Menu"<<endl;
    cout<<endl;
    cout<<" 1. DO NOT CHOOSE THIS ONE"<<endl;
    cout<<" 2. Soviet Union National Anthem"<<endl;
    cout<<" 3. Exit "<<endl;
    cout<<endl;
    
	cout<<"Masukan Pilihan Anda: ";
    cin>>pilih;
    cout<<endl;
    
	if (pilih == 1)
    {
    cout<<"CORATULATIONS COMRADE"<<endl;
    system("start vlc.exe Test.mp4");
    getch();
    goto Start;
    }
	    else if (pilih == 2)
	    {
        cout<<"YOU ARE NOW A MEMBER OF THE RED ARMY"<<endl;
        system("start vlc.exe Test.mp4");
        getch();
        goto Start;
	    }
	    
		else if (pilih == 3)
	    {
		system("exit");
	    }
    
getch();
}
