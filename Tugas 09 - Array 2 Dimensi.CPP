#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main()

{

int nilai  [2][5];
int i;
int j;

	for (i=0; i<2; i++)
    {
		for (j=0; j<5; j++)
    	{
    	cout<<"Masukkan nilai dari: "<<(i)<<", "<<(j);
    	cin>>nilai[i][j];
    	}
   }
   
   for (i=0; i<2; i++)
   {
   		for (j=0; j<5; j++)
   		{
       	cout<<"Tampilkan nilai: "<<nilai [i][j];
       	cout<<endl;
       	}
   }

getch();

}
