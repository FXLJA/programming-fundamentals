#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()

{

int merk;
int motor;
int harga;
int jumlah;
int sisa;
int tenor;
int cicilan;
int hargadp;
int dp = 700000;
float bunga = 0.1;

	cout<<"Selamat Datang";
	cout<<endl;
	cout<<endl;
	cout<<"Merk Motor: ";
	cout<<endl;
		cout<<"1. Honda ";
		cout<<endl;
		cout<<" 1. CRF 150L   Rp 32.000.000";
		cout<<endl;
		cout<<" 2. CBR 150R (Street Fire) Rp 26.500.000";
		cout<<endl;
		cout<<" 3. CBR 150R   Rp 33.500.000";
		cout<<endl;
		cout<<" 4. Sonic 150R   Rp 22.400.000";
		cout<<endl;
		cout<<" 5. CB 150 Verza   Rp 19.500.000";
		cout<<endl;
		cout<<" 6. CBR 250RR   Rp 70.000.000";
		cout<<endl;
		cout<<endl;
 			cout<<"2. Yamaha";
 			cout<<endl;
 			cout<<" 1. All New Vixion Rp 26.500.000";
  			cout<<endl;
 			cout<<" 2. Xabre New Color Rp 30.700.000";
 			cout<<endl;
 			cout<<" 3. MT-25  Rp 48.000.000";
 			cout<<endl;
 			cout<<" 4. All New R-15  Rp 35.500.000";
   			cout<<endl;
   			cout<<" 5. R-25   Rp 57.000.000";
   			cout<<endl;
   			cout<<endl;
  				cout<<"3. Suzuki";
  				cout<<endl;
  				cout<<" 1. All New Satria F150 Rp 22.500.000";
  				cout<<endl;
  				cout<<" 2. GSX-S150  Rp 25.000.000";
  				cout<<endl;
  				cout<<" 3. GSX-R150  Rp 30.000.000";
  				cout<<endl;
  				cout<<endl;
   				cout<<"4. Kawasaki";
   				cout<<endl;
   				cout<<" 1. Z 125 Pro Rp 32.500.000";
   				cout<<endl;
   				cout<<" 2. Z 250 (ABS) Rp 60.600.000";
   				cout<<endl;
   				cout<<" 3. Ninja 250 SL Rp 45.300.000";
   				cout<<endl;
   				cout<<" 4. Ninja 250 SE Rp 71.900.000";
   				cout<<endl;
   				cout<<endl;
               
	cout<<"Silahkan Pilih Merk: ";
	cin>>merk;
	switch (merk)
   	{
 		case 1:
   		{
 		cout<<"Honda";
 		cout<<endl;
 		cout<<"Masukan Tipe Motor: ";
 		cin>>motor;
 			switch (motor)
      		{
 				case 1:
      			{	
 				cout<<"CRF 150L(Rp 32.000.000)";
 				cout<<endl;
 				cout<<"Masukan Harga Motor: ";
   				cin>>harga;
 				cout<<"Masukan Jumlah Pembelian: ";
 				cin>>jumlah;
 				cout<<"Masukan Tenor: ";
 				cin>>tenor;
 				hargadp = dp-harga;
 				cicilan = hargadp/tenor + bunga*hargadp;
 				sisa = cicilan*tenor;
 				cout<<"Sisa Pembayaran: "<<sisa;
 				cout<<endl;
 				break;
 				}
  					case 2:
               		{
  					cout<<"CBR 150R (Street Fire)(Rp 26.500.000)";
  					cout<<endl;
  					cout<<"Masukan Harga Motor: ";
   					cin>>harga;
 					cout<<"Masukan Jumlah Pembelian: ";
 					cin>>jumlah;
 					cout<<"Masukan Tenor: ";
 					cin>>tenor;
 					hargadp = dp-harga;
 					cicilan = hargadp/tenor + bunga*hargadp;
 					sisa = cicilan*tenor;
 					cout<<"Sisa Pembayaran: "<<sisa;
 					cout<<endl;
 					break;
 					}
   						case 3:
                  		{
   						cout<<"CBR 150R(Rp 33.500.000)";
   						cout<<endl;
                	  	cout<<"Masukan Harga Motor: ";
   						cin>>harga;
 						cout<<"Masukan Jumlah Pembelian: ";
 						cin>>jumlah;
 						cout<<"Masukan Tenor: ";
 						cin>>tenor;
 						hargadp = dp-harga;
 						cicilan = hargadp/tenor + bunga*hargadp;
 						sisa = cicilan*tenor;
 						cout<<"Sisa Pembayaran: "<<sisa;
 						cout<<endl;
 						break;
 						}
    						case 4:
                     		{
	   						cout<<"Sonic 150R(Rp 22.400.000)";
       						cout<<endl;
                     		cout<<"Masukan Harga Motor: ";
   							cin>>harga;
 							cout<<"Masukan Jumlah Pembelian: ";
 							cin>>jumlah;
 							cout<<"Masukan Tenor: ";
 							cin>>tenor;
 							hargadp = dp-harga;
 							cicilan = hargadp/tenor + bunga*hargadp;
 							sisa = cicilan*tenor;
 							cout<<"Sisa Pembayaran: "<<sisa;
 							cout<<endl;
 							break;
       						}
     							case 5:
     							{
     							cout<<"CB 150 Verza(Rp 19.500.000)";
     							cout<<endl;
     							cout<<"Masukan Harga Motor: ";
   								cin>>harga;
 								cout<<"Masukan Jumlah Pembelian: ";
 								cin>>jumlah;
 								cout<<"Masukan Tenor: ";
 								cin>>tenor;
 								hargadp = dp-harga;
 								cicilan = hargadp/tenor + bunga*hargadp;
 								sisa = cicilan*tenor;
 								cout<<"Sisa Pembayaran: "<<sisa;
 								cout<<endl;
 								break;
                        		}
      								case 6:
                           			{
		  							cout<<"CBR 250RR(Rp 70.000.000)";
          							cout<<endl;
                           			cout<<"Masukan Harga Motor: ";
   									cin>>harga;
 									cout<<"Masukan Jumlah Pembelian: ";
 									cin>>jumlah;
 									cout<<"Masukan Tenor: ";
 									cin>>tenor;
 									hargadp = dp-harga;
 									cicilan = hargadp/tenor + bunga*hargadp;
 									sisa = cicilan*tenor;
 									cout<<"Sisa Pembayaran: "<<sisa;
 									cout<<endl;
 									break;
                           			}
            }
      		break;
      	}
	   		case 2:
        	{
			cout<<"Yamaha";
			cout<<endl;
			cout<<"Masukan Tipe Motor: ";
			cin>>motor;
				switch (motor)
            	{
    				case 1:
            		{
	 				cout<<"All New Vixion(Rp 26.500.000)";
	 				cout<<endl;
	            	cout<<"Masukan Harga Motor: ";
               		cin>>harga;
 	  				cout<<"Masukan Jumlah Pembelian: ";
 		  			cin>>jumlah;
 		 			cout<<"Masukan Tenor: ";
 					cin>>tenor;
 					hargadp = dp-harga;
 	  				cicilan = hargadp/tenor + bunga*hargadp;
 	 				sisa = cicilan*tenor;
 					cout<<"Sisa Pembayaran: "<<sisa;
 		 			cout<<endl;
 					break;
	 				}
						case 2:
               			{
						cout<<"Xabre New Color (Rp 30.700.000)";
						cout<<endl;
               			cout<<"Masukan Harga Motor: ";
               			cin>>harga;
 	  					cout<<"Masukan Jumlah Pembelian: ";
 		  				cin>>jumlah;
 		 				cout<<"Masukan Tenor: ";
 						cin>>tenor;
 						hargadp = dp-harga;
 	  					cicilan = hargadp/tenor + bunga*hargadp;
 	 					sisa = cicilan*tenor;
 						cout<<"Sisa Pembayaran: "<<sisa;
 		 				cout<<endl;
 						break;
						}
							case 3:
                    	 	{
							cout<<"MT-25 (Rp 48.000.000)";
							cout<<endl;
                    	 	cout<<"Masukan Harga Motor: ";
               				cin>>harga;
 	  						cout<<"Masukan Jumlah Pembelian: ";
 		  					cin>>jumlah;
 		 					cout<<"Masukan Tenor: ";
 							cin>>tenor;
 							hargadp = dp-harga;
 	  						cicilan = hargadp/tenor + bunga*hargadp;
 	 						sisa = cicilan*tenor;
 							cout<<"Sisa Pembayaran: "<<sisa;
 		 					cout<<endl;
 							break;
							}
								case 4:
   								{
								cout<<"All New R-15 (Rp 35.500.000)";
								cout<<endl;
                        		cout<<"Masukan Harga Motor: ";
               					cin>>harga;
 	  							cout<<"Masukan Jumlah Pembelian: ";
 		  						cin>>jumlah;
 		 						cout<<"Masukan Tenor: ";
 								cin>>tenor;
 								hargadp = dp-harga;
 	  							cicilan = hargadp/tenor + bunga*hargadp;
 	 							sisa = cicilan*tenor;
 								cout<<"Sisa Pembayaran: "<<sisa;
 		 						cout<<endl;
 								break;
								}
									case 5:
                           			{
									cout<<"R25 (Rp 57.000.000)";
									cout<<endl;
	                        		cout<<"Masukan Harga Motor: ";
               						cin>>harga;
 	  								cout<<"Masukan Jumlah Pembelian: ";
 		  							cin>>jumlah;
 		 							cout<<"Masukan Tenor: ";
 									cin>>tenor;
 									hargadp = dp-harga;
 	  								cicilan = hargadp/tenor + bunga*hargadp;
 	 								sisa = cicilan*tenor;
 									cout<<"Sisa Pembayaran: "<<sisa;
 		 		  					cout<<endl;
 									break;
									}
        		}
	    break;
		}
	      		case 3:
   				{
				cout<<"Suzuki";
				cout<<endl;
				cout<<"Masukan Tipe Motor: ";
				cin>>motor;
					switch (motor)
      				{
						case 1:
            			{
	 					cout<<"All New Satria F150(Rp 22.500.000)";
	 					cout<<endl;
	               		cout<<"Masukan Harga Motor: ";
           				cin>>harga;
 	  		 			cout<<"Masukan Jumlah Pembelian: ";
 		  				cin>>jumlah;
 		  				cout<<"Masukan Tenor: ";
 		 				cin>>tenor;
 						hargadp = dp-harga;
 	  					cicilan = hargadp/tenor + bunga*hargadp;
 	 					sisa = cicilan*tenor;
 						cout<<"Sisa Pembayaran: "<<sisa;
  	  					cout<<endl;
 						break;
	 					}
	 						case 2:
                     		{
	 						cout<<"GSX-S150(Rp 25.000.000)";
	 						cout<<endl;
	 						cout<<"Masukan Harga Motor: ";
               	  			cin>>harga;
 	  					  	cout<<"Masukan Jumlah Pembelian: ";
 		  				 	cin>>jumlah;
 		 					cout<<"Masukan Tenor: ";
 					  		cin>>tenor;
 					  		hargadp = dp-harga;
 	  				 		cicilan = hargadp/tenor + bunga*hargadp;
 	 						sisa = cicilan*tenor;
 				  			cout<<"Sisa Pembayaran: "<<sisa;
 		 	  				cout<<endl;
 			 				break;
	 						}
	 							case 3:
                        		{
	 							cout<<"GSX-R150(Rp 30.000.000)";
	 							cout<<endl;
                        		cout<<"Masukan Harga Motor: ";
               	  				cin>>harga;
 	  					  		cout<<"Masukan Jumlah Pembelian: ";
 		  				 		cin>>jumlah;
 		 						cout<<"Masukan Tenor: ";
 					  			cin>>tenor;
 					  			hargadp = dp-harga;
 	  				 			cicilan = hargadp/tenor + bunga*hargadp;
 	 							sisa = cicilan*tenor;
 				  				cout<<"Sisa Pembayaran: "<<sisa;
 		 	  					cout<<endl;
 			 					break;
	 							}
	            	}
	         break;
	         	}
			   		case 4:
               		{
					cout<<"Kawasaki";
					cout<<endl;
					cout<<"Masukan Tipe Motor: ";
					cin>>motor;
	 					switch (motor)
                  		{
	 						case 1:
                  			{
	 						cout<<"Z 125 pro(Rp 32.500.000)";
	 						cout<<endl;
	 						cout<<"Masukan Harga Motor: ";
               	  			cin>>harga;
 	  				  		cout<<"Masukan Jumlah Pembelian: ";
 		  			 		cin>>jumlah;
 		 		  			cout<<"Masukan Tenor: ";
 				  			cin>>tenor;
 			  	  			hargadp = dp-harga;
 	  		 	 			cicilan = hargadp/tenor + bunga*hargadp;
 	 						sisa = cicilan*tenor;
 		  	  				cout<<"Sisa Pembayaran: "<<sisa;
 	 	  					cout<<endl;
  		 					break;
					  	 	}
								case 2:
                        		{
	 							cout<<"Z 250 (ABS)(Rp 60.000.000)";
	 							cout<<endl;
                        		cout<<"Masukan Harga Motor: ";
               	  				cin>>harga;
 	  				  			cout<<"Masukan Jumlah Pembelian: ";
 		  			 			cin>>jumlah;
 		 		  				cout<<"Masukan Tenor: ";
 				  				cin>>tenor;
 			  	  				hargadp = dp-harga;
 	  		 	 				cicilan = hargadp/tenor + bunga*hargadp;
 	 							sisa = cicilan*tenor;
 		  	  					cout<<"Sisa Pembayaran: "<<sisa;
 	 	  						cout<<endl;
  		 						break;
	 							}
	 								case 3:
    								{
	 								cout<<"Ninja 250SL(Rp 45.300.000)";
	 								cout<<endl;
	                        		cout<<"Masukan Harga Motor: ";
               	  					cin>>harga;
 	  				  				cout<<"Masukan Jumlah Pembelian: ";
 		  			 				cin>>jumlah;
 		 		  					cout<<"Masukan Tenor: ";
 				  					cin>>tenor;
 			  	  					hargadp = dp-harga;
 	  		 	 					cicilan = hargadp/tenor + bunga*hargadp;
 	 								sisa = cicilan*tenor;
 		  	  						cout<<"Sisa Pembayaran: "<<sisa;
 	 	  							cout<<endl;
  		 							break;
	 								}
	 									case 4:
                              			{
                              			cout<<"Ninja 250 SE(Rp 71.900.000)";
	 									cout<<endl;
	                           			cout<<"Masukan Harga Motor: ";
               	  						cin>>harga;
 	  				  					cout<<"Masukan Jumlah Pembelian: ";
 		  			 					cin>>jumlah;
 		 		  						cout<<"Masukan Tenor: ";
 				  						cin>>tenor;
 			  	  						hargadp = dp-harga;
 	  		 	 						cicilan = hargadp/tenor + bunga*hargadp;
 	 									sisa = cicilan*tenor;
 		  	  							cout<<"Sisa Pembayaran: "<<sisa;
 	 	  								cout<<endl;
  		 								break;
	 									}
	               	}
	            break;
	            }

											default:
   											{
											cout<<"Pilihan Tidak Terdaftar";
											cout<<endl;
											}
	} //Close scope untuk switch (merk)

getch();
return 0;

} //Close scope untuk .cpp
