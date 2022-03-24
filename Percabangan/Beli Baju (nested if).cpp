#include <iostream>
using namespace std;

int main()
{
	int kode;
	int kode2;
	int ukuran;
	char balik;
	awal:
	system("cls");
	cout << "Selamat Datang Di Program Belanja" << endl;
	cout << endl;
	cout << "==== Monggo Dipilih Gan... ====" << endl;
	cout << "|1. Kaos                      |" << endl;
	cout << "|2. Kameja                    |" << endl;
	cout << "|3. Sweater                   |" << endl;
	cout << "|4. Jaket                     |" << endl;
	cout << "===============================" << endl;
	cout << endl;
	cout << "Masukan kode gan :"; cin >> kode;
		if(kode==1)
			{
				size:
				system("cls");
				cout << "\tKaos" << endl;
				cout << "1. M" << endl;
				cout << "2. L" << endl;
				cout << "3. XL" << endl;
				cout << "Pilih Ukuran :" ; cin >> ukuran;
				if(ukuran==1)
				{
					cout << "Ukuran \t\t:M" << endl;
					cout << "Harga \t\t:Rp.50000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==2)
				{
					cout << "Ukuran \t\t:L" << endl;
					cout << "Harga \t\t:Rp.60000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==3)
				{
			 		cout << "Ukuran \t\t:XL" << endl;
					cout << "Harga \t\t:Rp.65000" << endl;
					goto akhir;
					system("pause");
				}
				else 
				{
					cout << "Ukuranya gada" ;
					goto size;
					system("pause");
				}
			}
		else if(kode==2)
			{
				size2:
				system("cls");
				cout << "\tKameja" << endl;
				cout << "1. M" << endl;
				cout << "2. L" << endl;
				cout << "3. XL" << endl;
				cout << "Pilih Ukuran :" ; cin >> ukuran;
				if(ukuran==1)
				{
					cout << "Ukuran \t\t:M" << endl;
					cout << "Harga \t\t:Rp.120000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==2)
				{
					cout << "Ukuran \t\t:L" << endl;
					cout << "Harga \t\t:Rp.135000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==3)
				{
			 		cout << "Ukuran \t\t:XL" << endl;
					cout << "Harga \t\t:Rp.140000" << endl;
					goto akhir;
					system("pause");
				}
				else 
				{
					cout << "Ukuranya gada" ;
					goto size2;
					system("pause");
				}
			}
		else if(kode==3)
			{
				size3:
				system("cls");
				cout << "\tSweater" << endl;
				cout << "1. M" << endl;
				cout << "2. L" << endl;
				cout << "3. XL" << endl;
				cout << "Pilih Ukuran :" ; cin >> ukuran;
				if(ukuran==1)
				{
					cout << "Ukuran \t\t:M" << endl;
					cout << "Harga \t\t:Rp.130000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==2)
				{
					cout << "Ukuran \t\t:L" << endl;
					cout << "Harga \t\t:Rp.135000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==3)
				{
			 		cout << "Ukuran \t\t:XL" << endl;
					cout << "Harga \t\t:Rp.150000" << endl;
					goto akhir;
					system("pause");
				}
				else 
				{
					cout << "Ukuranya gada" ;
					goto size3;
					system("pause");
				}
			}
		else if(kode==4)
			{
				size4:
				system("cls");
				cout << "\tJaket" << endl;
				cout << "1. M" << endl;
				cout << "2. L" << endl;
				cout << "3. XL" << endl;
				cout << "Pilih Ukuran :" ; cin >> ukuran;
				if(ukuran==1)
				{
					cout << "Ukuran \t\t:M" << endl;
					cout << "Harga \t\t:Rp.130000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==2)
				{
					cout << "Ukuran \t\t:L" << endl;
					cout << "Harga \t\t:Rp.135000" << endl;
					goto akhir;
					system("pause");
				}
				else if(ukuran==3)
				{
			 		cout << "Ukuran \t\t:XL" << endl;
					cout << "Harga \t\t:Rp.150000" << endl;
					goto akhir;
					system("pause");
				}
				else 
				{
					cout << "Ukuranya gada" ;
					goto size4;
					system("pause");
				}
			}
		else
		{
			cout << "Yawdah Warnanya Random wkwkwk" << endl;
			system ("pause");
			system ("cls");
			goto akhir;
			
		}
	akhir:
	cout << endl;
	cout << endl;
	cout << "Terima Kasih Telah Berbelanja" << endl;
	cout << "Ingin Beli Lagi???? [Y/N]" ; cin >> balik;
		if(balik=='Y')
		{
			goto awal;
		}
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
			
}
