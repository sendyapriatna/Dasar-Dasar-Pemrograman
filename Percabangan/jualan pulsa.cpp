#include <iostream>
using namespace std;

int main()
{
	int pilih,pilih2,pilih3,uang;
	cout << "Silahkan Pilih Kartu" << endl;
	cout << "1.Axis" << endl;
	cout << "2.Telkomsel" << endl;
	cout << "3.Smartfren" << endl;
	cout << "PILIH PAKET COOY \t:"; cin >> pilih;
		switch(pilih)
			{
				case 1:
					cout << "PILIHAN PAKET AXIS" << endl;
					cout << "1.Internet" << endl;
					cout << "2.SMS Telepon" << endl;
					cout << "PILIH PAKET COOY \t:" ; cin >> pilih2;
						if(pilih2==1){
							cout << "Menu Paket Internet AXIS" << endl;
							cout << "1. 1GB - Rp.15000" <<endl;
							cout << "2. 2GB - Rp.25000" << endl;
							cout << "PILIH PAKET :" ; cin >> pilih3;
								if(pilih3==1){								
									cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<15000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-15000;
									
								}
								else{
										cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<25000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-25000;
								}
							
						}
						else{
							cout << "SMS dan TELFON AXIS" << endl;
							cout << "1. 100 SMS & 100 MENIT - Rp.10000" << endl;
							cout << "1. 200 SMS & 200 MENIT - Rp.20000" << endl;
							cout << "PILIH PAKET :" ; cin >> pilih3;
								if(pilih3==1){								
									cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<10000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-10000;
									
								}
								else{
										cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<25000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-20000;
								}
						}
						break;
				case 2:
					cout << "PILIHAN PAKET TELKOMSEL" << endl;
					cout << "1.Internet" << endl;
					cout << "2.SMS Telepon" << endl;
					cout << "PILIH PAKET COOY \t:" ; cin >> pilih2;
						if(pilih2==1){
							cout << "Menu Paket Internet AXIS" << endl;
							cout << "1. 1GB - Rp.25000" <<endl;
							cout << "2. 2GB - Rp.50000" << endl;
							cout << "PILIH PAKET :" ; cin >> pilih3;
								if(pilih3==1){								
									cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<25000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-25000;
									
								}
								else{
										cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<50000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-50000;
								}
							
						}
						else{
							cout << "SMS dan TELFON AXIS" << endl;
							cout << "1. 100 SMS & 100 MENIT - Rp.30000" << endl;
							cout << "1. 200 SMS & 200 MENIT - Rp.60000" << endl;
							cout << "PILIH PAKET :" ; cin >> pilih3;
								if(pilih3==1){								
									cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<30000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-30000;
									
								}
								else{
										cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<60000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-60000;
								}
						}
						break;
				case 3:
					cout << "PILIHAN PAKET SMARTFREN" << endl;
					cout << "1.Internet" << endl;
					cout << "2.SMS Telepon" << endl;
					cout << "PILIH PAKET COOY \t:" ; cin >> pilih2;
						if(pilih2==1){
							cout << "Menu Paket Internet AXIS" << endl;
							cout << "1. 1GB - Rp.5000" <<endl;
							cout << "2. 2GB - Rp.12000" << endl;
							cout << "PILIH PAKET :" ; cin >> pilih3;
								if(pilih3==1){								
									cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<5000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-5000;
									
								}
								else{
										cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<12000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-12000;
								}
							
						}
						else{
							cout << "SMS dan TELFON AXIS" << endl;
							cout << "1. 100 SMS & 100 MENIT - Rp.10000" << endl;
							cout << "1. 200 SMS & 200 MENIT - Rp.20000" << endl;
							cout << "PILIH PAKET :" ; cin >> pilih3;
								if(pilih3==1){								
									cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<10000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-10000;
									
								}
								else{
										cout << "Masukan uang anda :"; cin >> uang ;
										if(uang<25000){
											cout << "uang anda kurang coooy" << endl;
										}
										else
											cout << "Kembalian Anda :" << uang-20000;
								}
						}
						break;
				default:
					cout << "GADA COOY" << endl;
			}
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}
