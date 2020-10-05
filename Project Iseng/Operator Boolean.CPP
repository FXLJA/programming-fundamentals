#include <iostream>
#include <conio.h>

using namespace std;

main()

{
 //bool benar=1;
 //bool salah=0;
 float h1,h2,h3,h4,h5,h6,h7,h8;
 //bool hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7,hasil8;
 //hasil1=benar||salah;
 //hasil2=benar&&salah;
 		h1=0||0;
      h2=0||1;
      h3=1||0;
      h4=1||1;
      h5=0&&0;
      h6=0&&1;
      h7=1&&0;
      h8=1&&1;
 cout<<" Nilai 0 OR 0 = "<<h1<< endl;
 cout<<" Nilai 0 OR 1 = "<<h2<< endl;
 cout<<" Nilai 1 OR 0 = "<<h3<< endl;
 cout<<" Nilai 1 OR 1 = "<<h4<< endl;
 cout<<" Nilai 0 AND 0 = "<<h5<< endl;
 cout<<" Nilai 0 AND 1 = "<<h6<< endl;
 cout<<" Nilai 1 AND 0 = "<<h7<< endl;
 cout<<" Nilai 1 AND 1 = "<<h8<< endl;
getch();
}
