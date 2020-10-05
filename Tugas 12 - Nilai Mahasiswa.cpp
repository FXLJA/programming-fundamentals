#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main()

{

int i;
int prodi;
int batas;
char nama[20];
char mata_kuliah[20];
int tm;
int uts;
int uas;
double hasil;

	cout<<"Program Studi";
   	cout<<endl;
   	cout<<endl;
   	cout<<"1. Teknik Informatika";
   	cout<<endl;
   	cout<<"2. Sistem Informasi";
   	cout<<endl;

   	cout<<"Masukkan jumlah mahasiswa: ";
   	cin>>batas;
   	cout<<endl;
   	
   	for ( i=1; i<=batas; i++)
   	{
   	cout<<"Masukkan nama Anda: ";
	cin.getline(nama,sizeof(nama));
	cout<<endl;
   	cout<<"Pilih Program Studi Anda: ";
   	cin>>prodi;
   	cout<<endl;
   		switch (prodi)
   		{
   			case 1:
      		{
      		cout<<"Program Studi Teknik Informatika";
      		cout<<endl;
      		cout<<"Masukkan mata kuliah: ";
      		cin.getline(mata_kuliah,sizeof(mata_kuliah));
      		cout<<endl;
      		cout<<"Masukkan nilai TM: ";
      		cin>>tm;
      		cout<<"Masukkan nilai UTS: ";
      		cin>>uts;
      		cout<<"Masukkan nilai UAS: ";
      		cin>>uas;
      		cout<<endl;
      		cout<<"Nama: "<<nama;
      		cout<<endl;
      		cout<<"Mata Kuliah: "<<mata_kuliah;
      		cout<<endl;
      		cout<<"TM: "<<tm;
      		cout<<endl;
      		cout<<"UTS: "<<uts;
      		cout<<endl;
      		cout<<"UAS: "<<uas;
      		cout<<endl;
        		hasil = tm*0.3 + uts*0.3 + uas*0.4;
      			if(hasil>=85 && hasil <=100)
         		{	
         		cout <<"A";
         		cout<<endl;
				}
					else
					if(hasil>=80 && hasil<=84)
            		{
					cout <<"B+";
            		cout<<endl;
					}
						else
						if(hasil>=75 && hasil<=79)
               			{
						cout <<"B";
               			cout<<endl;
						}
							else
                  			if(hasil>=70 && hasil<=74)
                  			{
							cout<<"C+";
                  			cout<<endl;
							}
								else
								if(hasil>=69 && hasil<=65)
                     			{
								cout<<"C";
                    	 		cout<<endl;
								}
									else
                     				if(hasil>=60 && hasil<=64)
                        			{
									cout<<"D";
                        			cout<<endl;
									}
										else
										if(hasil>=0 && hasil<=59)
                        				{
										cout <<"E";
                           				cout<<endl;
                         				}
      cout<<endl;
      cout<<endl;
      break;
      		}
      			case 2:
         		{
         		cout<<"Program Studi Sistem Informasi";
      	 		cout<<endl;
      	 		cout<<"Masukkan mata kuliah: ";
      			cin>>mata_kuliah;
         		cout<<"Masukkan nilai TM: ";
      	 		cin>>tm;
      	 		cout<<"Masukkan nilai UTS: ";
      	 		cin>>uts;
      	 		cout<<"Masukkan nilai UAS: ";
      	 		cin>>uas;
      	 		cout<<endl;
      			cout<<"Nama: "<<nama;
      			cout<<endl;
      			cout<<"TM: "<<tm;
      			cout<<endl;
      			cout<<"UTS: "<<uts;
      			cout<<endl;
      			cout<<"UAS: "<<uas;
      			cout<<endl;
         			hasil = tm*0.3 + uts*0.3 + uas*0.4;
      				if(hasil>=85 && hasil <=100)
         			{
         			cout <<"A";
               		cout<<endl;
					}
						else
						if(hasil>=80 && hasil<=84)
            			{
						cout <<"B+";
                	  	cout<<endl;
						}
							else
							if(hasil>=75 && hasil<=79)
               				{
							cout <<"B";
                     		cout<<endl;
							}
								else
                  				if(hasil>=70 && hasil<=74)
                  				{
								cout<<"C+";
                        		cout<<endl;
								}
									else
									if(hasil>=69 && hasil<=65)
                     				{
									cout<<"C";
                           			cout<<endl;
									}
										else
                     					if(hasil>=60 && hasil<=64)
                        				{
										cout<<"D";
                              			cout<<endl;
                              			}
											else
											if(hasil>=0 && hasil<=59)
                        					{
											cout <<"E";
                                 			cout<<endl;
                         					}
         		cout<<endl;
         		cout<<endl;
      	 		break;
      			}//close scope case 2
	}//close scope switch
   }//close scope for


getch();

}
