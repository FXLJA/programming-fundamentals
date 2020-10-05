#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h> 
   
using namespace std;
    
main()
    
{
long desimal;
int pembagi= 1073741824;
long bit;
int ulang;
	
	Main:
	cout<<"Desimal: ";
    cin>>desimal;
        cout<<"Hexadesimal = "<<hex<<desimal<<endl;
        cout<<"Oktal       = "<<oct<<desimal<<endl;
        cout<<"Biner       = ";
            
			while (pembagi>desimal) pembagi/=2;
            do
			{
            bit=desimal/pembagi;
            cout<<bit;
            desimal= desimal%pembagi;
            pembagi/=2;
            }
            
            while(pembagi>=1);
            cout<<"\n";
            
            cout<<endl;
            cout<<"Lagi?"<<endl;
            cout<<"1: Ya"<<endl;
            cout<<"0: Tidak"<<endl;
            cout<<"Pilihan Anda: ";
            cin>>ulang;
            	if (ulang == 1)
            	{
            	system("cls");
            	goto Main;
				}
            		else if (ulang ==0)
            		{
            		return 0;
					}
getch();    

}

