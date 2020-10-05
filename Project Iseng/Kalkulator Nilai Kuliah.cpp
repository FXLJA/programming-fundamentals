#include <iostream>
#include <conio.h>
#include <stdlib.h> //Preprocessor

using namespace std; //Namespace

//Global scope
 
main() //Main method

{
	//Variable declaration
int UTS;
int UAS;
int TM;
float hasil;
int loop;
	
	Start:
	system("cls");

	cout<<"Nilai UTS: ";
   	cin>>UTS;

	cout<<"Nilai UAS: ";
   	cin>>UAS;

	cout<<"Nilai TM: ";
   	cin>>TM;

	cout<<endl;

	hasil = UTS * 0.3 + TM * 0.3 + UAS * 0.4;
	
	cout<<"Nama: Jason Alexander"<<endl;
	cout<<"NIM: 32180082"<<endl;
	cout<<endl;
	cout<<"Nilai akhir: "<<hasil<<endl;
		if(hasil>=80 && hasil <=100)
     	{
     	cout<<"Grade: A";
		}
			else
			if(hasil>=73 && hasil<=79)
        	{
			cout<<"Grade: B+";
			}
			
			else
			if(hasil>=66 && hasil<=72)
       		{
			cout<<"Grade: B";
			}
			
			else
      		if(hasil>=58 && hasil<=65)
      		{		
			cout<<"Grade: C+";
			}
			
			else
			if(hasil>=51 && hasil<=57)
     		{
			cout<<"Grade: C";
			}
			
			else
    		if(hasil>=41 && hasil<=50)
    		{
			cout<<"Grade: D";
			}
			
			else
			if(hasil>=0 && hasil<=40)
   			{
			cout<<"Grade: E";
   			}
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Ulang? (1/0): ";
	cin>>loop;
	if (loop == 1)
	{
	goto Start;
	}
		else if (loop ==0)
		{
		cout<<"Good luck mate";
		}
		
getch();

}
