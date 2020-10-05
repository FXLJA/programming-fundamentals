#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>

using namespace std;

string utama [8] [48] =	{
						{"H","  "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","He"," ", " ","<1>"},
				   		{"Li"," ","Be"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","B"," ","C","  ","N","  ","O","  ","F"," ","Ne"," ", " ","<2>"},
				   		{"Na"," ","Mg"," "," "," "," "," "," "," "," "," "," "," "," ", " "," "," "," "," "," "," "," "," "," "," "," "," ","","Al"," ","Si"," ","P","  ","S","  ","Cl","","Ar"," ", " ","<3>"},
				   		{"K"," "," Ca"," ","Sc"," ","Ti"," ","V"," ","Cr"," ","Mn"," ","Fe"," ","Co"," ","Ni"," ","Cu"," ","Zn"," ","Ga"," ","Ge"," ","As"," ","Se"," ","Br","","Kr"," ", " ","<4>"},
				   		{"Rb"," ","Sr"," ","Y"," "," Zr"," ","Nb","","Mo"," ","Tc"," ","Ru"," ","Rh"," ","Pd"," ","Ag"," ","Cd"," ","In"," ","Sn"," ","Sb"," ","Te"," ","I"," ","Xe"," ", " ","<5>"},
				   		{"Cs"," ","Ba"," ","\b[L] ","","Hf"," ","Ta","","W"," "," Re"," ","Os"," ","Ir"," ","Pt"," ","Au"," ","Hg"," ","Tl"," ","Pb"," ","Bi"," ","Po"," ","At","","Rn"," ", " ","<6>"},
				   		{"Fr"," ","Ra"," ","\b[A] ","","Rf"," ","Db","","Sg"," ","Bh"," ","Hs"," ","Mt"," ","Ds"," ","Rg"," ","Cn"," ","Nh"," ","Fl"," ","Mc"," ","Lv"," ","Ts","","Og"," ", " ","<7>"}
						};
string lantanida_aktinida [2] [38] =	{
						   			 	{"Lantanida -> "," ","La"," ","Ce"," ","Pr"," ","Nd"," ","Pm"," ","Sm"," ","Eu"," ","Gd"," ","Tb"," ","Dy"," ","Ho"," ","Er"," ","Tm"," ","Yb"," ","Lu"," ","\b[L]"},
						   			 	{"Aktinida  -> "," ","Ac"," ","Th"," ","Pa"," ","U"," "," Np"," ","Pu"," ","Am"," ","Cm"," ","Bk"," ","Cf"," ","Es"," ","Fm"," ","Md"," ","No"," ","Lr"," ","\b[A]"}
						   			 	};
int x;
int y;
int input;

//Display tabel
void display()
{
	cout << "\t\t\t\t============================== \n";
	cout << "\t\t\t\t=== Sistem Periodik Unsur ===  \n";
	cout << "\t\t\t\t============================== \n" << endl;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 48; y++)
		{
			cout << utama[x][y] <<" ";
		}
		cout << endl;
	}
	cout << endl;
	
	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 38; y++)
		{
			cout << lantanida_aktinida[x][y] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
}

//Input 1 (Nomor atom)
void nomor_atom()
{
int no_atom;

	cout << "Masukkan nomor atom unsur yang ingin Anda ketahui (1 s/d 118): ";
	cin >> no_atom;
	cout << endl;
		switch (no_atom)
		{ //Open scope switch
			//Periode 1
			case 1:
			{
				cout << "Lambang unsur: H" << endl
					 << "Nama unsur: Hidrogen" << endl
					 << "Massa atom: 1.00sma" << endl
					 << "Golongan: I A" << endl
					 << "Periode: 1" << endl
					 << "Konfigurasi elektron: 1s1" << endl
					 << "Bilangan oksidasi: -1 +1" << endl
					 << "Jenis unsur: Non-logam" << endl
					 << "Fase: Gas" << endl
					 << "Radioaktivitas: Tidak ada" << endl;
				break;
			}

			case 2:
			{
				cout << "Lambang unsur: He" << endl;
				cout << "Nama unsur: Helium" << endl;
				cout << "Massa atom: 4.00sma" << endl;
				cout << "Golongan: VIII A" << endl;
				cout << "Periode: 1" << endl;
				cout << "Konfigurasi elektron: 1s2 ([He])" << endl;
				cout << "Bilangan oksidasi: 0" << endl;
				cout << "Jenis unsur: Gas mulia" << endl;
				cout << "Fase: Gas" << endl;
				cout << "Radioaktivitas: Tidak ada" << endl;
				break;
			}

				//Periode 2
				case 3:
				{
					cout << "Lambang unsur: Li" << endl;
					cout << "Nama unsur: Lithium" << endl;
					cout << "Massa atom: 6.94sma" << endl;
					cout << "Golongan: I A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: [He] 2s1" << endl;
					cout << "Bilangan oksidasi: +1" << endl;
					cout << "Jenis unsur: Logam alkali" << endl;
					cout << "Fase: Padat" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

				case 4:
				{
					cout << "Lambang unsur: Be" << endl;
					cout << "Nama unsur: Berilium" << endl;
					cout << "Massa atom: 9.01sma" << endl;
					cout << "Golongan: II A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: [He] 2s2" << endl;
					cout << "Bilangan oksidasi: +2" << endl;
					cout << "Jenis unsur: Logam alkali tanah" << endl;
					cout << "Fase: Padat" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

				case 5:
				{
					cout << "Lambang unsur: B" << endl;
					cout << "Nama unsur: Boron" << endl;
					cout << "Massa atom: 10.81sma" << endl;
					cout << "Golongan: III A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: [He] 2s2 2p1" << endl;
					cout << "Bilangan oksidasi: +3" << endl;
					cout << "Jenis unsur: Metaloid" << endl;
					cout << "Fase: Padat" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

				case 6:
				{
					cout << "Lambang unsur: C" << endl;
					cout << "Nama unsur: Karbon" << endl;
					cout << "Massa atom: 12.01sma" << endl;
					cout << "Golongan: IV A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: [He] 2s2 2p2" << endl;
					cout << "Bilangan oksidasi: -4 -3 -2 -1 +1 +2 +3 +4" << endl;
					cout << "Jenis unsur: Non-logam" << endl;
					cout << "Fase: Padat" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

				case 7:
				{
					cout << "Lambang unsur: N" << endl;
					cout << "Nama unsur: Nitrogen" << endl;
					cout << "Massa atom: 14.00sma" << endl;
					cout << "Golongan: V A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: [He] 2s2 2p3" << endl;
					cout << "Bilangan oksidasi: -1 +1 +3 +5" << endl;
					cout << "Jenis unsur: Non-logam" << endl;
					cout << "Fase: Gas" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

				case 8:
				{
					cout << "Lambang unsur: O" << endl;
					cout << "Nama unsur: Oksigen" << endl;
					cout << "Massa atom: 15.99sma" << endl;
					cout << "Golongan: VI A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: [He] 2s2 2p4" << endl;
					cout << "Bilangan oksidasi: -2" << endl;
					cout << "Jenis unsur: Non-logam" << endl;
					cout << "Fase: Gas" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

				case 9:
				{
					cout << "Lambang unsur: F" << endl;
					cout << "Nama unsur: Fluorin" << endl;
					cout << "Massa atom: 18.99sma" << endl;
					cout << "Golongan: VII A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: [He] 2s2 2p5" << endl;
					cout << "Bilangan oksidasi: -1" << endl;
					cout << "Jenis unsur: Halogen" << endl;
					cout << "Fase: Gas" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

				case 10:
				{
					cout << "Lambang unsur: Ne" << endl;
					cout << "Nama unsur: Neon" << endl;
					cout << "Massa atom: 20.17sma" << endl;
					cout << "Golongan: VIII A" << endl;
					cout << "Periode: 2" << endl;
					cout << "Konfigurasi elektron: 1s2 2s2 2p6 ([Ne])" << endl;
					cout << "Jenis unsur: Gas mulia" << endl;
					cout << "Bilangan oksidasi: -" << endl;
					cout << "Fase: Gas" << endl;
					cout << "Radioaktivitas: Tidak ada" << endl;
					break;
				}

					//Periode 3
					case 11:
					{
						cout << "Lambang unsur: Na" << endl;
						cout << "Nama unsur: Natrium" << endl;
						cout << "Massa atom: 22.98sma" << endl;
						cout << "Golongan: I A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: [Ne] 3s1" << endl;
						cout << "Bilangan oksidasi: +1" << endl;
						cout << "Jenis unsur: Logam alkali" << endl;
						cout << "Fase: Padat" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

					case 12:
					{
						cout << "Lambang unsur: Mg" << endl;
						cout << "Nama unsur: Magnesium" << endl;
						cout << "Massa atom: 24.30sma" << endl;
						cout << "Golongan: II A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: [Ne] 3s2" << endl;
						cout << "Bilangan oksidasi: +2" << endl;
						cout << "Jenis unsur: Logam alkali tanah" << endl;
						cout << "Fase: Padat" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

					case 13:
					{
						cout << "Lambang unsur: Al" << endl;
						cout << "Nama unsur: Aluminium" << endl;
						cout << "Massa atom: 26.98sma" << endl;
						cout << "Golongan: III A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: [Ne] 3s2 3p1" << endl;
						cout << "Bilangan oksidasi: +3" << endl;
						cout << "Jenis unsur: Logam" << endl;
						cout << "Fase: Padat" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

					case 14:
					{
						cout << "Lambang unsur: Si" << endl;
						cout << "Nama unsur: Silikon" << endl;
						cout << "Massa atom: 28.08sma" << endl;
						cout << "Golongan: IV A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: [Ne] 3s2 3p2" << endl;
						cout << "Bilangan oksidasi: -4 +4" << endl;
						cout << "Jenis unsur: Metaloid" << endl;
						cout << "Fase: Padat" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

					case 15:
					{
						cout << "Lambang unsur: P" << endl;
						cout << "Nama unsur: Fosfor" << endl;
						cout << "Massa atom: 30.97sma" << endl;
						cout << "Golongan: V A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: [Ne] 3s2 3p3" << endl;
						cout << "Bilangan oksidasi: -3 +3 +5" << endl;
						cout << "Jenis unsur: Non-logam" << endl;
						cout << "Fase: Padat" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

					case 16:
					{
						cout << "Lambang unsur: S" << endl;
						cout << "Nama unsur: Sulfur" << endl;
						cout << "Massa atom: 32.06sma" << endl;
						cout << "Golongan: VI A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: [Ne] 3s2 3p4" << endl;
						cout << "Bilangan oksidasi: -2 +2 +4 +6" << endl;
						cout << "Jenis unsur: Non-logam" << endl;
						cout << "Fase: Padat" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

					case 17:
					{
						cout << "Lambang unsur: Cl" << endl;
						cout << "Nama unsur: Klorin" << endl;
						cout << "Massa atom: 35.45sma" << endl;
						cout << "Golongan: VII A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: [Ne] 3s2 3p5" << endl;
						cout << "Bilangan oksidasi: -1 +1 +3 +5 +7" << endl;
						cout << "Jenis unsur: Halogen" << endl;
						cout << "Fase: Gas" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

					case 18:
					{
						cout << "Lambang unsur: Ar" << endl;
						cout << "Nama unsur: Argon" << endl;
						cout << "Massa atom: 39.94sma" << endl;
						cout << "Golongan: VIII A" << endl;
						cout << "Periode: 3" << endl;
						cout << "Konfigurasi elektron: 1s2 2s2 2p6 3s2 3p6 ([Ar])" << endl;
						cout << "Bilangan oksidasi: -" << endl;
						cout << "Jenis unsur: Gas mulia" << endl;
						cout << "Fase: Gas" << endl;
						cout << "Radioaktivitas: Tidak ada" << endl;
						break;
					}

						//Periode 4
						case 19:
						{
							cout << "Lambang unsur: K" << endl;
							cout << "Nama unsur: Kalium" << endl;
							cout << "Massa atom: 39.09sma" << endl;
							cout << "Golongan: I A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s1" << endl;
							cout << "Bilangan oksidasi: +1" << endl;
							cout << "Jenis unsur: Logam alkali" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 20:
						{
							cout << "Lambang unsur: Ca" << endl;
							cout << "Nama unsur: Kalsium" << endl;
							cout << "Massa atom: 40.07sma" << endl;
							cout << "Golongan: II A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2" << endl;
							cout << "Bilangan oksidasi: +2" << endl;
							cout << "Jenis unsur: Logam alkali tanah" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 21:
						{
							cout << "Lambang unsur: Sc" << endl;
							cout << "Nama unsur: Scandium" << endl;
							cout << "Massa atom: 44.95sma" << endl;
							cout << "Golongan: III B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d1" << endl;
							cout << "Bilangan oksidasi: +3" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 22:
						{
							cout << "Lambang unsur: Ti" << endl;
							cout << "Nama unsur: Titanium" << endl;
							cout << "Massa atom: 47.88sma" << endl;
							cout << "Golongan: IV B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d2" << endl;
							cout << "Bilangan oksidasi: +4" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 23:
						{
							cout << "Lambang unsur: V" << endl;
							cout << "Nama unsur: Vanadium" << endl;
							cout << "Massa atom: 50.94sma" << endl;
							cout << "Golongan: V B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d3" << endl;
							cout << "Bilangan oksidasi: +5" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 24:
						{
							cout << "Lambang unsur: Cr" << endl;
							cout << "Nama unsur: Krom" << endl;
							cout << "Massa atom: 51.99sma" << endl;
							cout << "Golongan: VI B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s1 3d5" << endl;
							cout << "Bilangan oksidasi: +3 +6" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 25:
						{
							cout << "Lambang unsur: Mn" << endl;
							cout << "Nama unsur: Mangan" << endl;
							cout << "Massa atom: 54.93sma" << endl;
							cout << "Golongan: VII B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d5" << endl;
							cout << "Bilangan oksidasi: +2 +4 +7" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 26:
						{
							cout << "Lambang unsur: Fe" << endl;
							cout << "Nama unsur: Besi" << endl;
							cout << "Massa atom: 55.93sma" << endl;
							cout << "Golongan: VIII B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d6" << endl;
							cout << "Bilangan oksidasi: +2 +3 +6" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 27:
						{
							cout << "Lambang unsur: Co" << endl;
							cout << "Nama unsur: Kobalt" << endl;
							cout << "Massa atom: 58.93sma" << endl;
							cout << "Golongan: VIII B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d7" << endl;
							cout << "Bilangan oksidasi: +2 +3" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 28:
						{
							cout << "Lambang unsur: Ni" << endl;
							cout << "Nama unsur: Nikel" << endl;
							cout << "Massa atom: 58.69sma" << endl;
							cout << "Golongan: VIII B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d8" << endl;
							cout << "Bilangan oksidasi: +2" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 29:
						{
							cout << "Lambang unsur: Cu" << endl;
							cout << "Nama unsur: Tembaga" << endl;
							cout << "Massa atom: 63.54sma" << endl;
							cout << "Golongan: I B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s1 3d10" << endl;
							cout << "Bilangan oksidasi: +2" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 30:
						{
							cout << "Lambang unsur: Zn" << endl;
							cout << "Nama unsur: Seng" << endl;
							cout << "Massa atom: 65.39sma" << endl;
							cout << "Golongan: II B" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d10" << endl;
							cout << "Bilangan oksidasi: +2" << endl;
							cout << "Jenis unsur: Logam transisi" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 31:
						{
							cout << "Lambang unsur: Ga" << endl;
							cout << "Nama unsur: Gallium" << endl;
							cout << "Massa atom: 69.73sma" << endl;
							cout << "Golongan: III A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d10 4p1" << endl;
							cout << "Bilangan oksidasi: +3" << endl;
							cout << "Jenis unsur: Logam" << endl;
							cout << "Fase: Padat & Cair" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 32:
						{
							cout << "Lambang unsur: Ge" << endl;
							cout << "Nama unsur: Germanium" << endl;
							cout << "Massa atom: 72.61sma" << endl;
							cout << "Golongan: IV A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d10 4p2" << endl;
							cout << "Bilangan oksidasi: -4 +2 +4" << endl;
							cout << "Jenis unsur: Metaloid" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 33:
						{
							cout << "Lambang unsur: As" << endl;
							cout << "Nama unsur: Arsenik" << endl;
							cout << "Massa atom: 74.92sma" << endl;
							cout << "Golongan: V A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d10 4p3" << endl;
							cout << "Bilangan oksidasi: -3 +3 +5" << endl;
							cout << "Jenis unsur: Metaloid" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 34:
						{
							cout << "Lambang unsur: Se" << endl;
							cout << "Nama unsur: Selenium" << endl;
							cout << "Massa atom: 78.97sma" << endl;
							cout << "Golongan: VI A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d10 4p4" << endl;
							cout << "Bilangan oksidasi: -2 +2 +4 +6" << endl;
							cout << "Jenis unsur: Non-logam" << endl;
							cout << "Fase: Padat" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 35:
						{
							cout << "Lambang unsur: Br" << endl;
							cout << "Nama unsur: Bromin" << endl;
							cout << "Massa atom: 79.90sma" << endl;
							cout << "Golongan: VII A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: [Ar] 4s2 3d10 4p5" << endl;
							cout << "Bilangan oksidasi: -1 +1 +3 +5" << endl;
							cout << "Jenis unsur: Halogen" << endl;
							cout << "Fase: Cair" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

						case 36:
						{
							cout << "Lambang unsur: Kr" << endl;
							cout << "Nama unsur: Kripton" << endl;
							cout << "Massa atom: 84.80sma" << endl;
							cout << "Golongan: VIII A" << endl;
							cout << "Periode: 4" << endl;
							cout << "Konfigurasi elektron: 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 ([Kr])" << endl;
							cout << "Bilangan oksidasi: +2" << endl;
							cout << "Jenis unsur: Gas mulia" << endl;
							cout << "Fase: Gas" << endl;
							cout << "Radioaktivitas: Tidak ada" << endl;
							break;
						}

							//Periode 5
							case 37:
							{
								cout << "Lambang unsur: Rb" << endl;
								cout << "Nama unsur: Rubidium" << endl;
								cout << "Massa atom: 84.46sma" << endl;
								cout << "Golongan: I A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s1" << endl;
								cout << "Bilangan oksidasi: +1" << endl;
								cout << "Jenis unsur: Logam alkali" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 38:
							{
								cout << "Lambang unsur: Sr" << endl;
								cout << "Nama unsur: Strontium" << endl;
								cout << "Massa atom: 87.62sma" << endl;
								cout << "Golongan: II A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2" << endl;
								cout << "Bilangan oksidasi: +2" << endl;
								cout << "Jenis unsur: Logam alkali tanah" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 39:
							{
								cout << "Lambang unsur: Y" << endl;
								cout << "Nama unsur: Yttrium" << endl;
								cout << "Massa atom: 88.90sma" << endl;
								cout << "Golongan: III B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d1" << endl;
								cout << "Bilangan oksidasi: +3" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 40:
							{
								cout << "Lambang unsur: Zr" << endl;
								cout << "Nama unsur: Zirkonium" << endl;
								cout << "Massa atom: 91.22sma" << endl;
								cout << "Golongan: IV B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d2" << endl;
								cout << "Bilangan oksidasi: +4" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 41:
							{
								cout << "Lambang unsur: Nb" << endl;
								cout << "Nama unsur: Niobium" << endl;
								cout << "Massa atom: 92.90sma" << endl;
								cout << "Golongan: V B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d3" << endl;
								cout << "Bilangan oksidasi: +5" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 42:
							{
								cout << "Lambang unsur: Mo" << endl;
								cout << "Nama unsur: Molybdenum" << endl;
								cout << "Massa atom: 95.95sma" << endl;
								cout << "Golongan: VI B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s1 4d5" << endl;
								cout << "Bilangan oksidasi: +4 +6" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 43:
							{
								cout << "Lambang unsur: Tc" << endl;
								cout << "Nama unsur: Technetium" << endl;
								cout << "Massa atom: 98.90sma" << endl;
								cout << "Golongan: VII B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d5" << endl;
								cout << "Bilangan oksidasi: +4 +7" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Rendah" << endl;
								break;
							}

							case 44:
							{
								cout << "Lambang unsur: Ru" << endl;
								cout << "Nama unsur: Ruthenium" << endl;
								cout << "Massa atom: 101.07sma" << endl;
								cout << "Golongan: VIII B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d6" << endl;
								cout << "Bilangan oksidasi: +3 +4" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 45:
							{
								cout << "Lambang unsur: Rh" << endl;
								cout << "Nama unsur: Rhodium" << endl;
								cout << "Massa atom: 102.90sma" << endl;
								cout << "Golongan: VIII B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d7" << endl;
								cout << "Bilangan oksidasi: +3" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 46:
							{
								cout << "Lambang unsur: Pd" << endl;
								cout << "Nama unsur: Palladium" << endl;
								cout << "Massa atom: 106.42sma" << endl;
								cout << "Golongan: VIII B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d18" << endl;
								cout << "Bilangan oksidasi: +2 +4" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 47:
							{
								cout << "Lambang unsur: Ag" << endl;
								cout << "Nama unsur: Perak" << endl;
								cout << "Massa atom: 107.86sma" << endl;
								cout << "Golongan: I B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s1 4d10" << endl;
								cout << "Bilangan oksidasi: +1" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 48:
							{
								cout << "Lambang unsur: Cd" << endl;
								cout << "Nama unsur: Cadmium" << endl;
								cout << "Massa atom: 112.41sma" << endl;
								cout << "Golongan: II B" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d10" << endl;
								cout << "Bilangan oksidasi: +2" << endl;
								cout << "Jenis unsur: Logam transisi" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 49:
							{
								cout << "Lambang unsur: In" << endl;
								cout << "Nama unsur: Indium" << endl;
								cout << "Massa atom: 114.81sma" << endl;
								cout << "Golongan: III A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d10 5p1" << endl;
								cout << "Bilangan oksidasi: +3" << endl;
								cout << "Jenis unsur: Logam" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 50:
							{
								cout << "Lambang unsur: Sn" << endl;
								cout << "Nama unsur: Timah" << endl;
								cout << "Massa atom: 118.71sma" << endl;
								cout << "Golongan: IV A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d10 5p2" << endl;
								cout << "Bilangan oksidasi: -4 +2 +4" << endl;
								cout << "Jenis unsur: Logam" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 51:
							{
								cout << "Lambang unsur: Sb" << endl;
								cout << "Nama unsur: Antimoni" << endl;
								cout << "Massa atom: 121.76sma" << endl;
								cout << "Golongan: V A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d10 5p3" << endl;
								cout << "Bilangan oksidasi: -3 +3 +5" << endl;
								cout << "Jenis unsur: Metaloid" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 52:
							{
								cout << "Lambang unsur: Te" << endl;
								cout << "Nama unsur: Tellurium" << endl;
								cout << "Massa atom: 127.6sma" << endl;
								cout << "Golongan: VI A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d10 5p4" << endl;
								cout << "Bilangan oksidasi: -2 +2 +4 +6" << endl;
								cout << "Jenis unsur: Metaloid" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 53:
							{
								cout << "Lambang unsur: I" << endl;
								cout << "Nama unsur: Iodin" << endl;
								cout << "Massa atom: 126.90sma" << endl;
								cout << "Golongan: VII A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: [Kr] 5s2 4d10 5p5" << endl;
								cout << "Bilangan oksidasi: -1 +1 +3 +5 +7" << endl;
								cout << "Jenis unsur: Halogen" << endl;
								cout << "Fase: Padat" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

							case 54:
							{
								cout << "Lambang unsur: Xe" << endl;
								cout << "Nama unsur: Xenon" << endl;
								cout << "Massa atom: 131.29sma" << endl;
								cout << "Golongan: VIII A" << endl;
								cout << "Periode: 5" << endl;
								cout << "Konfigurasi elektron: 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 ([Xe])" << endl;
								cout << "Bilangan oksidasi: 0 +2 +4 +6" << endl;
								cout << "Jenis unsur: Gas mulia" << endl;
								cout << "Fase: Gas" << endl;
								cout << "Radioaktivitas: Tidak ada" << endl;
								break;
							}

								//Periode 6a
								case 55:
								{
									cout << "Lambang unsur: Cs" << endl;
									cout << "Nama unsur: Caesium" << endl;
									cout << "Massa atom: 132.90sma" << endl;
									cout << "Golongan: I A" << endl;
									cout << "Periode: 6" << endl;
									cout << "Konfigurasi elektron: [Xe] 6s1" << endl;
									cout << "Bilangan oksidasi: +1" << endl;
									cout << "Jenis unsur: Logam alkali" << endl;
									cout << "Fase: Padat" << endl;
									cout << "Radioaktivitas: Tidak ada" << endl;
									break;
								}

								case 56:
								{
									cout << "Lambang unsur: Ba" << endl;
									cout << "Nama unsur: Barium" << endl;
									cout << "Massa atom: 137.32sma" << endl;
									cout << "Golongan: II A" << endl;
									cout << "Periode: 6" << endl;
									cout << "Konfigurasi elektron: [Xe] 6s2" << endl;
									cout << "Bilangan oksidasi: +2" << endl;
									cout << "Jenis unsur: Logam alkali tanah" << endl;
									cout << "Fase: Padat" << endl;
									cout << "Radioaktivitas: Tidak ada" << endl;
									break;
								}

									//Periode Lantanida
									case 57:
									{
										cout << "Lambang unsur: La" << endl;
										cout << "Nama unsur: Lanthanum" << endl;
										cout << "Massa atom: 138.90sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 5d1" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 58:
									{
										cout << "Lambang unsur: Ce" << endl;
										cout << "Nama unsur: Cerium" << endl;
										cout << "Massa atom: 140.11sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f1 5d1" << endl;
										cout << "Bilangan oksidasi: +3 +4" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 59:
									{
										cout << "Lambang unsur: Pr" << endl;
										cout << "Nama unsur: Praseodymium" << endl;
										cout << "Massa atom: 140.90sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f3" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 60:
									{
										cout << "Lambang unsur: Nd" << endl;
										cout << "Nama unsur: Neodymium" << endl;
										cout << "Massa atom: 144.24sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f4" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 61:
									{
										cout << "Lambang unsur: Pm" << endl;
										cout << "Nama unsur: Promethium" << endl;
										cout << "Massa atom: [144.91]sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f5" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tinggi" << endl;
										break;
									}

									case 62:
									{
										cout << "Lambang unsur: Sm" << endl;
										cout << "Nama unsur: Samarium" << endl;
										cout << "Massa atom: 150.36sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f6" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 63:
									{
										cout << "Lambang unsur: Eu" << endl;
										cout << "Nama unsur: Europium" << endl;
										cout << "Massa atom: 151.96sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f7" << endl;
										cout << "Bilangan oksidasi: +2 +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 64:
									{
										cout << "Lambang unsur: Gd" << endl;
										cout << "Nama unsur: Gadolinium" << endl;
										cout << "Massa atom: 157.25sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f7 5d1" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 65:
									{
										cout << "Lambang unsur: Tb" << endl;
										cout << "Nama unsur: Terbium" << endl;
										cout << "Massa atom: 158.92sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f9" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 66:
									{
										cout << "Lambang unsur: Dy" << endl;
										cout << "Nama unsur: Dysprosium" << endl;
										cout << "Massa atom: 162.50sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f10" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 67:
									{
										cout << "Lambang unsur: Ho" << endl;
										cout << "Nama unsur: Holmium" << endl;
										cout << "Massa atom: 164.93sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f11" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 68:
									{
										cout << "Lambang unsur: Er" << endl;
										cout << "Nama unsur: Erbium" << endl;
										cout << "Massa atom: 167.26sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f12" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 69:
									{
										cout << "Lambang unsur: Tm" << endl;
										cout << "Nama unsur: Thulium" << endl;
										cout << "Massa atom: 168.93sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f13" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 70:
									{
										cout << "Lambang unsur: Yb" << endl;
										cout << "Nama unsur: Ytterbium" << endl;
										cout << "Massa atom: 173.04sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f14" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

									case 71:
									{
										cout << "Lambang unsur: Lu" << endl;
										cout << "Nama unsur: Lutetium" << endl;
										cout << "Massa atom: 174.96sma" << endl;
										cout << "Golongan: -" << endl;
										cout << "Periode: 6" << endl;
										cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d1" << endl;
										cout << "Bilangan oksidasi: +3" << endl;
										cout << "Jenis unsur: Lantanida" << endl;
										cout << "Fase: Padat" << endl;
										cout << "Radioaktivitas: Tidak ada" << endl;
										break;
									}

										//Periode 6b
										case 72:
										{
											cout << "Lambang unsur: Hf " << endl;
											cout << "Nama unsur: Hafnium" << endl;
											cout << "Massa atom: 178.49sma" << endl;
											cout << "Golongan: IV B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d2" << endl;
											cout << "Bilangan oksidasi: +4" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 73:
										{
											cout << "Lambang unsur: Ta" << endl;
											cout << "Nama unsur: Tantalum" << endl;
											cout << "Massa atom: 180.94sma" << endl;
											cout << "Golongan: V B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d3" << endl;
											cout << "Bilangan oksidasi: +5" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 74:
										{
											cout << "Lambang unsur: W" << endl;
											cout << "Nama unsur: Tungsten" << endl;
											cout << "Massa atom: 183.85sma" << endl;
											cout << "Golongan: VI B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d4" << endl;
											cout << "Bilangan oksidasi: +4 +6" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 75:
										{
											cout << "Lambang unsur: Re" << endl;
											cout << "Nama unsur: Rhenium" << endl;
											cout << "Massa atom: VII B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d5" << endl;
											cout << "Bilangan oksidasi: +4" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 76:
										{
											cout << "Lambang unsur: Os" << endl;
											cout << "Nama unsur: Osmium" << endl;
											cout << "Massa atom: 190.23sma" << endl;
											cout << "Golongan: VIII B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d6" << endl;
											cout << "Bilangan oksidasi: +4" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 77:
										{
											cout << "Lambang unsur: Ir" << endl;
											cout << "Nama unsur: Iridium" << endl;
											cout << "Massa atom: 192.22sma" << endl;
											cout << "Golongan: VIII B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d7" << endl;
											cout << "Bilangan oksidasi: +3 +4" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 78:
										{
											cout << "Lambang unsur: Pt" << endl;
											cout << "Nama unsur: Platinum" << endl;
											cout << "Massa atom: 195.08sma" << endl;
											cout << "Golongan: VIII B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s1 4f14 5d9" << endl;
											cout << "Bilangan oksidasi: +2 +4" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 79:
										{
											cout << "Lambang unsur: Au" << endl;
											cout << "Nama unsur: Emas" << endl;
											cout << "Massa atom: 196.96sma" << endl;
											cout << "Golongan: I B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s1 4f14 5d10" << endl;
											cout << "Bilangan oksidasi: +3" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 80:
										{
											cout << "Lambang unsur: Hg" << endl;
											cout << "Nama unsur: Raksa" << endl;
											cout << "Massa atom: 200.59sma" << endl;
											cout << "Golongan: II B" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d10" << endl;
											cout << "Bilangan oksidasi: +1 +2" << endl;
											cout << "Jenis unsur: Logam transisi" << endl;
											cout << "Fase: Cair" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 81:
										{
											cout << "Lambang unsur: Tl" << endl;
											cout << "Nama unsur: Thallium" << endl;
											cout << "Massa atom: 204.38sma" << endl;
											cout << "Golongan: III A" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d10 6p1" << endl;
											cout << "Bilangan oksidasi: +1 +3" << endl;
											cout << "Jenis unsur: Logam" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 82:
										{
											cout << "Lambang unsur: Pb" << endl;
											cout << "Nama unsur: Timbal" << endl;
											cout << "Massa atom: 207.20sma" << endl;
											cout << "Golongan: IV A" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d10 6p2" << endl;
											cout << "Bilangan oksidasi: +2 +4" << endl;
											cout << "Jenis unsur: Logam" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tidak ada" << endl;
											break;
										}

										case 83:
										{
											cout << "Lambang unsur: Bi" << endl;
											cout << "Nama unsur: Bismut" << endl;
											cout << "Massa atom: 208.98sma" << endl;
											cout << "Golongan: V A" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d10 6p3" << endl;
											cout << "Bilangan oksidasi: +3" << endl;
											cout << "Jenis unsur: Logam" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Rendah" << endl;
											break;
										}

										case 84:
										{
											cout << "Lambang unsur: Po" << endl;
											cout << "Nama unsur: Polonium" << endl;
											cout << "Massa atom: [208.98]sma" << endl;
											cout << "Golongan: VI A" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d10 6p4" << endl;
											cout << "Bilangan oksidasi: -2 +2 +4" << endl;
											cout << "Jenis unsur: Metaloid" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Tinggi" << endl;
											break;
										}

										case 85:
										{
											cout << "Lambang unsur: At" << endl;
											cout << "Nama unsur: Astatin" << endl;
											cout << "Massa atom: [209.98]sma" << endl;
											cout << "Golongan: VII A" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: [Xe] 6s2 4f14 5d10 6p5" << endl;
											cout << "Bilangan oksidasi: -1 +1" << endl;
											cout << "Jenis unsur: Halogen" << endl;
											cout << "Fase: Padat" << endl;
											cout << "Radioaktivitas: Sangat tinggi" << endl;
											break;
										}

										case 86:
										{
											cout << "Lambang unsur: Rn" << endl;
											cout << "Nama unsur: Radon" << endl;
											cout << "Massa atom: [222.01]sma" << endl;
											cout << "Golongan: VIII A" << endl;
											cout << "Periode: 6" << endl;
											cout << "Konfigurasi elektron: 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 ([Rn])" << endl;
											cout << "Bilangan oksidasi: +2" << endl;
											cout << "Jenis unsur: Gas mulia" << endl;
											cout << "Fase: Gas" << endl;
											cout << "Radioaktivitas: Tinggi" << endl;
											break;
										}

											//Periode 7a
											case 87:
											{
												cout << "Lambang unsur: Fr" << endl;
												cout << "Nama unsur: Fransium" << endl;
												cout << "Massa atom: [223.02]sma" << endl;
												cout << "Golongan: I A" << endl;
												cout << "Periode: 7" << endl;
												cout << "Konfigurasi elektron: [Rn] 7s1" << endl;
												cout << "Bilangan oksidasi: +1" << endl;
												cout << "Jenis unsur: Logam alkali" << endl;
												cout << "Fase: Padat" << endl;
												cout << "Radioaktivitas: Sangat tinggi" << endl;
												break;
											}

											case 88:
											{
												cout << "Lambang unsur: Ra" << endl;
												cout << "Nama unsur: Radium" << endl;
												cout << "Massa atom: [226.02]sma" << endl;
												cout << "Golongan: II A" << endl;
												cout << "Periode: 7" << endl;
												cout << "Konfigurasi elektron: [Rn] 7s2" << endl;
												cout << "Bilangan oksidasi: +2" << endl;
												cout << "Jenis unsur: Logam alkali tanah" << endl;
												cout << "Fase: Padat" << endl;
												cout << "Radioaktivitas: Sedang" << endl;
												break;
											}

												//Periode Aktinida
												case 89:
												{
													cout << "Lambang unsur: Ac" << endl;
													cout << "Nama unsur: Actinium" << endl;
													cout << "Massa atom: [227.02]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 6d1" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Tinggi" << endl;
													break;
												}

												case 90:
												{
													cout << "Lambang unsur: Th" << endl;
													cout << "Nama unsur: Thorium" << endl;
													cout << "Massa atom: 232.03sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 6d2" << endl;
													cout << "Bilangan oksidasi: +4" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Rendah" << endl;
													break;
												}

												case 91:
												{
													cout << "Lambang unsur: Pa" << endl;
													cout << "Nama unsur: Protactinium" << endl;
													cout << "Massa atom: [231.03]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f2 6d1" << endl;
													cout << "Bilangan oksidasi: +5" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Sedang" << endl;
													break;
												}

												case 92:
												{
													cout << "Lambang unsur: U" << endl;
													cout << "Nama unsur: Uranium" << endl;
													cout << "Massa atom: 238.02sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f3 6d1" << endl;
													cout << "Bilangan oksidasi: +6" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Rendah" << endl;
													break;
												}

												case 93:
												{
													cout << "Lambang unsur: Np" << endl;
													cout << "Nama unsur: Neptunium" << endl;
													cout << "Massa atom: 237.04sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f4 6d1" << endl;
													cout << "Bilangan oksidasi: +5" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Rendah" << endl;
													break;
												}

												case 94:
												{
													cout << "Lambang unsur: Pu" << endl;
													cout << "Nama unsur: Plutonium" << endl;
													cout << "Massa atom: 244.06sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f6" << endl;
													cout << "Bilangan oksidasi: +4" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Rendah" << endl;
													break;
												}

												case 95:
												{
													cout << "Lambang unsur: Am" << endl;
													cout << "Nama unsur: Americium" << endl;
													cout << "Massa atom: [243.06]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f7" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Sedang" << endl;
													break;
												}

												case 96:
												{
													cout << "Lambang unsur: Cm" << endl;
													cout << "Nama unsur: Curium" << endl;
													cout << "Massa atom: 247.07sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f7 6d1" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Rendah" << endl;
													break;
												}

												case 97:
												{
													cout << "Lambang unsur: Bk" << endl;
													cout << "Nama unsur: Berkelium" << endl;
													cout << "Massa atom: [247.07]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f9" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Sedang" << endl;
													break;
												}

												case 98:
												{
													cout << "Lambang unsur: Cf" << endl;
													cout << "Nama unsur: Californium" << endl;
													cout << "Massa atom: [251.08]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f10" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Sedang" << endl;
													break;
												}

												case 99:
												{
													cout << "Lambang unsur: Es" << endl;
													cout << "Nama unsur: Einsteinium" << endl;
													cout << "Massa atom: [254]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f11" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Tinggi" << endl;
													break;
												}

												case 100:
												{
													cout << "Lambang unsur: Fm" << endl;
													cout << "Nama unsur: Fermium" << endl;
													cout << "Massa atom: [257.09]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f12" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Tinggi" << endl;
													break;
												}

												case 101:
												{
													cout << "Lambang unsur: Md" << endl;
													cout << "Nama unsur: Mendelevium" << endl;
													cout << "Massa atom: [258.10]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f13" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Tinggi" << endl;
													break;
												}

												case 102:
												{
													cout << "Lambang unsur: No" << endl;
													cout << "Nama unsur: Nobelium" << endl;
													cout << "Massa atom: [259.10]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f14" << endl;
													cout << "Bilangan oksidasi: +2" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Sangat tinggi" << endl;
													break;
												}

												case 103:
												{
													cout << "Lambang unsur: Lr" << endl;
													cout << "Nama unsur: Lawrencium" << endl;
													cout << "Massa atom: [262]sma" << endl;
													cout << "Golongan: -" << endl;
													cout << "Periode: 7" << endl;
													cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d1" << endl;
													cout << "Bilangan oksidasi: +3" << endl;
													cout << "Jenis unsur: Aktinida" << endl;
													cout << "Fase: Padat" << endl;
													cout << "Radioaktivitas: Sangat tinggi" << endl;
													break;
												}

													//Periode 7b
													case 104:
													{
														cout << "Lambang unsur: Rf" << endl;
														cout << "Nama unsur: Rutherfordium" << endl;
														cout << "Massa atom: [261]sma" << endl;
														cout << "Golongan: IV B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d2" << endl;
														cout << "Bilangan oksidasi: +4" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: " << endl;
														break;
													}

													case 105:
													{
														cout << "Lambang unsur: Db" << endl;
														cout << "Nama unsur: Dubnium" << endl;
														cout << "Massa atom: [268]sma" << endl;
														cout << "Golongan: V B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d3" << endl;
														cout << "Bilangan oksidasi: +5" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: " << endl;
														break;
													}

													case 106:
													{
														cout << "Lambang unsur: Sg" << endl;
														cout << "Nama unsur: Seaborgium" << endl;
														cout << "Massa atom: [269]sma" << endl;
														cout << "Golongan: VI B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d4" << endl;
														cout << "Bilangan oksidasi: +6" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: " << endl;
														break;
													}

													case 107:
													{
														cout << "Lambang unsur: Bh" << endl;
														cout << "Nama unsur: Bohrium" << endl;
														cout << "Massa atom: [270]sma" << endl;
														cout << "Golongan: VII B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d5" << endl;
														cout << "Bilangan oksidasi: +7" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: " << endl;
														break;
													}

													case 108:
													{
														cout << "Lambang unsur: Hs" << endl;
														cout << "Nama unsur: Hassium" << endl;
														cout << "Massa atom: [270]sma" << endl;
														cout << "Golongan: VIII B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d6" << endl;
														cout << "Bilangan oksidasi: +8" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: " << endl;
														break;
													}

													case 109:
													{
														cout << "Lambang unsur: Mt" << endl;
														cout << "Nama unsur: Meitnerium" << endl;
														cout << "Massa atom: [278]sma" << endl;
														cout << "Golongan: VIII B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d7" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
														}

													case 110:
													{
														cout << "Lambang unsur: Ds" << endl;
														cout << "Nama unsur: Darmstadtium" << endl;
														cout << "Massa atom: [281]sma" << endl;
														cout << "Golongan: VIII B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d8" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 111:
													{
														cout << "Lambang unsur: Rg" << endl;
														cout << "Nama unsur: Roentgenium" << endl;
														cout << "Massa atom: [282]sma" << endl;
														cout << "Golongan: I B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d9" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 112:
													{
														cout << "Lambang unsur: Cn" << endl;
														cout << "Nama unsur: Copernicium" << endl;
														cout << "Massa atom: [285]sma" << endl;
														cout << "Golongan: II B" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d10" << endl;
														cout << "Bilangan oksidasi: +2" << endl;
														cout << "Jenis unsur: Logam transisi trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 113:
													{
														cout << "Lambang unsur: Nh" << endl;
														cout << "Nama unsur: Nihonium" << endl;
														cout << "Massa atom: [286]sma" << endl;
														cout << "Golongan: III A" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d10 7p1" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Logam trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 114:
													{
														cout << "Lambang unsur: Fl" << endl;
														cout << "Nama unsur: Flerovium" << endl;
														cout << "Massa atom: [289]sma" << endl;
														cout << "Golongan: IV A" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d10 7p2" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Logam trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 115:
													{
														cout << "Lambang unsur: Mc" << endl;
														cout << "Nama unsur: Moscovium" << endl;
														cout << "Massa atom: [290]sma" << endl;
														cout << "Golongan: V A" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d10 7p3" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Logam trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 116:
													{
														cout << "Lambang unsur: Lv" << endl;
														cout << "Nama unsur: Livermorium" << endl;
														cout << "Massa atom: [293]sma" << endl;
														cout << "Golongan: VI A" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d10 7p4" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Logam trans-uranium" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 117:
													{
														cout << "Lambang unsur: Ts" << endl;
														cout << "Nama unsur: Tennessine" << endl;
														cout << "Massa atom: [294]sma" << endl;
														cout << "Golongan: VII A" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: [Rn] 7s2 5f14 6d10 7p5" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Halogen" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}

													case 118:
													{
														cout << "Lambang unsur: Og" << endl;
														cout << "Nama unsur: Oganesson" << endl;
														cout << "Massa atom: [294]sma" << endl;
														cout << "Golongan: VIII A" << endl;
														cout << "Periode: 7" << endl;
														cout << "Konfigurasi elektron: 1s2 2s2 2p6 3s2 3p6 4s2 3d10 4p6 5s2 4d10 5p6 6s2 4f14 5d10 6p6 7s2 5f14 6d10 7p6" << endl;
														cout << "Bilangan oksidasi: Belum diketahui" << endl;
														cout << "Jenis unsur: Gas mulia" << endl;
														cout << "Fase: Atomik" << endl;
														cout << "Radioaktivitas: Berbahaya" << endl;
														break;
													}
		} //Close scope switch
}

//Input 2 (Golongan)
void golongan()
{
int gol;

	cout << "Masukkan golongan unsur yang ingin Anda ketahui (1 s/d 16): ";
	cin >> gol;
	cout << endl;

		if (gol == 1)
		{
			cout << "Nomor golongan: I A" << endl;
			cout << "Nama golongan: Logam alkali" << endl;
			cout << "Anggota golongan: Lithium, Natrium, Kalium, Rubidium, Caesium, Fransium" << endl;
			cout << "Sifat golongan dalam bentuk larutan: Basa kuat" << endl;
			cout << "pH golongan dalam larutan: >7" << endl;
		}
			else if (gol == 2)
			{
				cout << "Nomor golongan: II A" << endl;
				cout << "Nama golongan: Logam alkali tanah" << endl;
				cout << "Anggota golongan: Berilium, Magnesium, Kalsium, Strontium, Barium, Radium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Basa kuat" << endl;
				cout << "pH golongan dalam larutan: >7" << endl;
			}

			else if (gol == 3)
			{
				cout << "Nomor golongan: III B" << endl;
				cout << "Nama golongan: Logam transisi awal" << endl;
				cout << "Anggota golongan: Scandium, Yttrium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}

			else if (gol == 4)
			{
				cout << "Nomor golongan: IV B" << endl;
				cout << "Nama golongan: Logam transisi awal" << endl;
				cout << "Anggota golongan: Titanium, Zirkonium, Hafnium, Rutherfordium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}

			else if (gol == 5)
			{
				cout << "Nomor golongan: V B" << endl;
				cout << "Nama golongan: Logam transisi tengah" << endl;
				cout << "Anggota golongan: Vanadium, Niobium, Tantalum, Dubnium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}

			else if (gol == 6)
			{
				cout << "Nomor golongan: VI B" << endl;
				cout << "Nama golongan: Logam transisi tengah" << endl;
				cout << "Anggota golongan: Krom, Molybdenum, Tungsten, Seaborgium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}

			else if (gol == 7)
			{
				cout << "Nomor golongan: VII B" << endl;
				cout << "Nama golongan: Logam transisi akhir" << endl;
				cout << "Anggota golongan: Mangan, Technetium, Rhenium, Bohrium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}

			else if (gol == 8)
			{
				cout << "Nomor golongan: VIII B" << endl;
				cout << "Nama golongan: Logam transisi akhir" << endl;
				cout << "Anggota golongan: Besi, Ruthenium, Osmium, Hassium" << endl;
				cout << "		  Kobalt, Iridium, Rhodium, Meitnerium" << endl;
				cout << "		  Nikel, Palladium, Platinum, Darmstadtium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam & basa lemah" << endl;
				cout << "pH golongan dalam larutan: 7<= pH <= 9" << endl;
			}

			else if (gol == 9)
			{
				cout << "Nomor golongan: I B" << endl;
				cout << "Nama golongan: Logam koin" << endl;
				cout << "Anggota golongan: Tembaga, Perak, Emas, Roentgenium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}

			else if (gol == 10)
			{
				cout << "Nomor golongan: II B" << endl;
				cout << "Nama golongan: Logam volatil" << endl;
				cout << "Anggota golongan: Seng, Cadmium, Raksa, Copernicium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam & basa lemah" << endl;
				cout << "pH golongan dalam larutan: 7<= pH <= 9" << endl;
			}

			else if (gol == 11)
			{
				cout << "Nomor golongan: III A" << endl;
				cout << "Nama golongan: Trial" << endl;
				cout << "Anggota golongan: Boron, Aluminium, Gallium, Indium, Thallium, Nihonium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam & basa lemah" << endl;
				cout << "pH golongan dalam larutan: 7<= pH <= 9" << endl;
			}

			else if (gol == 12)
			{
				cout << "Nomor golongan: IV A" << endl;
				cout << "Nama golongan: Tetral" << endl;
				cout << "Anggota golongan: Karbon, Silikon, Germanium, Timah, Timbal, Flerovium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam & senyawa organik" << endl;
				cout << "pH golongan dalam larutan: 5<= pH <= 10" << endl;
			}

			else if (gol == 13)
			{
				cout << "Nomor golongan: V A" << endl;
				cout << "Nama golongan: Pnictogen" << endl;
				cout << "Anggota golongan: Nitrogen, Fosfor, Arsenik, Antimoni, Bismut, Moscovium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam & asam" << endl;
				cout << "pH golongan dalam larutan: 2<= pH <= 7" << endl;
			}

			else if (gol == 14)
			{
				cout << "Nomor golongan: VI A" << endl;
				cout << "Nama golongan: Kalkogen" << endl;
				cout << "Anggota golongan: Oksigen, Sulfur, Selenium, Tellurium, Polonium, Livermorium" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Garam indikator & asam" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}

			else if (gol == 15)
			{
				cout << "Nomor golongan: VII A" << endl;
				cout << "Nama golongan: Halogen" << endl;
				cout << "Anggota golongan: Fluorin, Klorin, Bromin, Iodin, Astatin, Tennessine" << endl;
				cout << "Sifat golongan dalam bentuk larutan: Asam kuat" << endl;
				cout << "pH golongan dalam larutan: <7" << endl;
			}

			else if (gol == 16)
			{
				cout << "Nomor golongan: VIII A" << endl;
				cout << "Nama golongan: Gas mulia" << endl;
				cout << "Anggota golongan: Helium, Neon, Argon, Kripton, Xenon, Radon, Oganesson" << endl;
				cout << "Sifat golongan dalam bentuk larutan: -" << endl;
				cout << "pH golongan dalam larutan: -" << endl;
			}
}

//Input 3 (Periode)
void periode()
{
int period;
	cout << "Masukkan periode unsur yang ingin Anda ketahui (1 s/d 9): ";
	cin >> period;
	cout << endl;

		if (period == 1)
		{
			cout << "Nomor periode: 1" << endl
				 << "Nama periode: Periode sangat pendek" << endl
				 << "Anggota periode: Hidrogen, Helium" << endl;
		}
			else if (period == 2)
			{
				cout << "Nomor periode: 2" << endl
					 << "Nama periode: Periode pendek 1" << endl
					 << "Anggota periode: Lithium, Berilium, Boron, Karbon, Nitrogen, Oksigen, Fluorin, Neon" << endl;
			}

			else if (period == 3)
			{
				cout << "Nomor periode: 3" << endl
					 << "Nama periode: Periode pendek 2" << endl
					 << "Anggota periode: Natrium, Magnesium, Aluminium, Silikon, Fosfor, Sulfur, Klorin, Argon" << endl;
			}

			else if (period == 4)
			{
				cout << "Nomor periode: 4" << endl
					 << "Nama periode: Periode panjang 1" << endl
					 << "Anggota periode: Kalium, Kalsium, Scandium, Titanium, Vanadium, Krom, Mangan, Besi, Kobalt," << endl
					 << "		 Nikel, Tembaga, Seng, Gallium, Germanium, Arsenik, Selenium, Bromin, Kripton" << endl;
			}

			else if (period == 5)
			{
				cout << "Nomor periode: 5" << endl
					 << "Nama periode: Periode panjang 2" << endl
					 << "Anggota periode: Rubidium, Strontium, Yttrium, Zirkonium, Niobium, Molybdenum, Technetium, Ruthenium," << endl
					 << "		 Rhodium, Palladium, Perak, Cadmium, Indium, Timah, Antimoni, Tellurium," << endl
					 << "		 Iodin, Xenon" << endl;
			}

			else if (period == 6)
			{
				cout << "Nomor periode: 6" << endl
					 << "Nama periode: Periode sangat panjang 1" << endl
					 << "Anggota periode: Caesium, Barium, Hafnium, Tantalum, Tungsten, Rhenium, Osmium, Iridium," << endl
					 << "		 Platinum, Emas, Raksa, Thallium, Timbal, Bismut, Polonium, Astatin," << endl
					 << "		 Radon" << endl;
			}

			else if (period == 7)
			{
				cout << "Nomor periode: 7" << endl
					 << "Nama periode: Periode sangat panjang 2" << endl
					 << "Anggota periode: Fransium, Radium, Rutherfordium, Dubnium, Seaborgium, Bohrium, Hassium, Meitnerium," << endl
					 << "		 Darmstadtium, Roentgenium, Copernicium, Nihonium, Flerovium, Moscovium, Livermorium, Tennessine" << endl
					 << "		 Oganesson" << endl;
			}

			else if (period == 8)
			{
				cout << "Nomor periode: L" << endl
					 << "Nama periode: Lantanida" << endl
					 << "Anggota periode: Lanthanum, Cerium, Praseodymium, Neodymium, Promethium, Samarium, Europium, Gadolinium," << endl
					 << "		 Terbium, Dysprosium, Holmium, Erbium, Thulium, Ytterbium, Lutetium" << endl;
			}

			else if (period == 9)
			{
				cout << "Nomor periode: A" << endl
					 << "Nama periode: Aktinida" << endl
					 << "Anggota periode: Actinium, Thorium, Protactinium, Uranium, Neptunium, Plutonium, Americium, Curium," << endl
					 << "		 Berkelium, Californium, Einsteinium, Fermium, Mendelevium, Nobelium, Lawrencium" << endl;
			}
}

//Input 4 (Lambang unsur)
void lambang() 
{
string lambang_unsur;
int group;
bool isFound = false;

	cout << "Masukkan lambang unsur yang ingin dicari: ";
	cin.ignore();
	cin >> lambang_unsur;
	cout << endl;

	for (x = 0; x < 8; x++)
	{ //Open main for
		for (y = 0; y < 48; y++)
		{ //Open secondary for
			if (lambang_unsur == utama [x] [y]) 
			{ //Open if 1
                group = y / 2 + 1;

                cout << "Unsur tersebut berada di golongan " << group << " dan periode " << x + 1;
				isFound = true;
				goto loop_break;
			} //Close if 1
			
			if (x < 2 && y < 38)
			{ //Open if 2a
            	if (lambang_unsur == lantanida_aktinida [x] [y])
				{ //Open if 2b
					if (x + 1 == 1)
					{ //Open if 2c
						cout << "Unsur tersebut berada di periode Lantanida";
					} //Close if 2c
						else if (x + 1 == 2)
						{ //Open if 2d
							cout << "Unsur tersebut berada di periode Aktinida";
						} //Close if 2d
                cout << " urutan ke-" << y;
                isFound = true;
                goto loop_break;
                } //Close if 2b
			} //Close if 2a
		} //Close secondary for
	} //Close main for

	loop_break:
	if (!isFound)
	{
		cout << "Unsur tidak ditemukan";
	}
	cout << endl;
}

//Pilihan jenis input
void menu()
{
    cout << "Pilih jenis input anda:" << endl
     	 << "1. Nomor atom" << endl
     	 << "2. Golongan" << endl
     	 << "3. Periode" << endl
     	 << "4. Lambang unsur" << endl
     	 << "5. Keluar" << endl
		 << "Pilihan Anda: ";
    cin >> input;
    
    cout << endl;
    
    	switch (input)
    	{ //Open switch
    		case 1:
    		{
	     		nomor_atom();
	    		break;   			
			}

    		case 2:
    		{
	      		golongan();
	    		break;  			
			}

    		case 3:
    		{
	    		periode();
	    		break;    			
			}

    		case 4:
    		{
	     		lambang();
	    		break;   			
			}
			
			case 5:
			{
				cout << "Terima Kasih";
				system("EXIT");
			}
		} //Close switch
}

//Main Program
int main()
{
	do
	{
		system("CLS");
		
		display();
		menu();
		
	getch();
	}
	while (input != 5);
	
return 0;
}
