#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main()

{

string data[2][5] = {{"Jayaku", "Nicholas Louis", "Mikael", "Derry","Darma"},
					 {"100", "99", "90", "89", "74"}};

	for(int i=1; i<=5; i++)
	{
 		cout<<"\nData mahasiswa ke-"<<i<<endl;
 			for(int j = 0; j<=1; j++)
         {
  				cout<<"Array ["<<i<<"]["<<j<<"] : "<<data[i][j];
  				cout<<endl;
 			}
 				cout<<endl;
   }

getch();
}
