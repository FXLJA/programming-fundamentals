#include <iostream>
#include <conio.h>

using namespace std;

main()

{

int UTS;
int UAS;
int TM;
double hasil;

	cout<<"Nilai UTS: ";
   	cin>>UTS;
	cout<<"Nilai UAS: ";
   	cin>>UAS;
	cout<<"Nilai TM: ";
   	cin>>TM;
	hasil = UTS * 0.3 + TM * 0.3 + UAS * 0.4;

			if(hasil>=85 && hasil <=100)
         	{
			cout <<"Nilai akhir: "<<hasil<<endl;
         	cout <<"A";
			}
				else
				if(hasil>=80 && hasil<=84)
            	{
				cout <<"B+";
				}
					else
					if(hasil>=75 && hasil<=79)
               		{
					cout <<"B";
					}
						else
                  		if(hasil>=70 && hasil<=74)
                  		{		
						cout<<"C+";
						}
							else
							if(hasil>=69 && hasil<=65)
                     		{
							cout<<"C";
							}
								else
                        		if(hasil>=60 && hasil<=64)
                        		{
								cout<<"D";
								}
									else
									if(hasil>=0 && hasil<=59)
                           			{
									cout <<"E";
                           			}

getch();

}
