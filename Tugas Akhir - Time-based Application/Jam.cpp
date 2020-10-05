#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

	struct jam
	{
   	int hh;
	int mm;
	int ss;
	int ms;
	};

	class jam_digital
	{
	public:
		jam_digital()
		{
	    cout<<"\t\t    "<<"Program Jam Digital"<<endl<<endl;
		}
	        void input();
	        void proses();

	private:
		jam hour;
	};

	void jam_digital::input()
	{
	struct tm * Sys_T;
	time_t Tval;

	Tval = time(NULL);
	Sys_T = localtime(&Tval); //Mengambil nilai jam komputer

	//Memasukan nilai jam ke variabel
	hour.hh = Sys_T->tm_hour;
	hour.mm = Sys_T->tm_min;
	hour.ss = Sys_T->tm_sec;
	hour.ms = 00;
	}

	void jam_digital::proses()
	{ //Open function
		while (hour.hh<=24)
	    { //Open while jam
	        while (hour.mm<=59)
	        { //Open while menit
	            while (hour.ss<=59)
	            { //Open while sekon
	                while (hour.ms<=10)
	                { //Open while mikrosekon
	                    hour.ms++;
	                    Sleep(100);
	                    system("cls");
	                    jam_digital(); //Pemanggilan Function
	                    cout<<"                     "<<hour.hh<<" : "<<hour.mm<<" : "<<hour.ss<<" : "<<hour.ms <<endl<<endl;
	                } //Close while mikrosekon
	            hour.ms = 0;
	            hour.ss++;
	            } //Close while sekon
	        hour.ss = 0;
	        hour.mm++;
	        } //Close while menit
	    hour.mm = 0;
	    hour.hh++;
	    	if (hour.hh == 24)
	    	{
	       	hour.hh = 0; //Reset jam ke 00:00
	       	}
	    } //Close while jam
	} //Close function
	
int main()
{
jam_digital run; //Memanggil class jam_digital + command run

run.input();	//Command run untuk function input (line 31)
run.proses();   //Command run untuk function proses (line 46)

getch();
}
