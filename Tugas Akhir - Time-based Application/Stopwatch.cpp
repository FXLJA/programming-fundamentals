#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

int h = 0;
int m = 0;
int s = 0;
int ms = 0;
char input = 'p';

	//Display di console
	void watch()
	{
		system("cls");
		cout<<"\t\t\t\t>> Stopwatch <<"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t "<<h<<" : "<<m<<" : "<<s<<" : "<<ms<<endl;
		
		cout<<endl;
		cout<<"S: Start"<<endl;
		cout<<"P: Pause"<<endl;
		cout<<"R: Reset"<<endl;
		cout<<"X: Exit"<<endl;
		cout<<"Press Key: ";
	}

int main()
{ //Open int main
void watch();

	watch();

	while(1)
	{
		if (kbhit())
		{
		input = getch();
		}
		
		if (input == 's' || input == 'S')
		{
		break;
		}
		
		if (input == 'x' || input =='X')
		{
		exit(0);
		}
	}

	while(1)
	{ //Open main loop
	watch();
	Sleep(20);

		if(kbhit())
		{
		input = getch();
		}

		if (input == 'r' || input =='R')
		{
		h = m = s = ms = 0;
		watch();
			while(1)
			{
				if (kbhit())
				{
				input = getch();
				}
				
				if (input == 's' || input == 'S')
				{
				break;
				}
				
				if (input == 'x' || input == 'X')
				{
				exit(0);
				}
			}
		}
			else if (input == 'p' || input == 'P')
			{
				while(1)
				{
					if (kbhit())
					{
					input = getch();
					}
					
					if (input == 's' || input == 'S')
					{
					break;
					}
					
					if (input == 'x' || input == 'X')
					{
					exit(0);
					}
					
					if (input == 'r' || input == 'R')
					{
					input = 'c';
					h = m = s = ms = 0;
					watch();
					}
				}	
			}
				else if (input == 'x' || input == 'X')
				{
				exit(0);
				}
		
		//Kondisi increment looping
		if(ms != 15)
		{
		ms++;
		}	
			else
			{ //Open mikrosekon
			ms = 0;
				if(s != 59)
				{
				s++;
				}	
					else
					{ //Open sekon
					s = 0;
						if(m != 59)
						{
						m++;
						}
							else
							{ //Open menit
							m = 0;
							h++;
							} //Close menit
					} //Close sekon
			} //Close mikrosekon
	} //Close main loop
} //Close int main
