#include <iostream>
using namespace std;

int main()

{
	float rupiah;
	float dollar;
	float yen;
	int kode;
	char loncat;

	awal:
		system("cls");
		cout << "==== Nilai Tukar Rupiah ====" << endl;
		cout << "1. Rupiah ke Dollar dan Yen " << endl;
		cout << "2. Dollar ke Rupiah dan Yen " << endl;
		cout << "3. Yen ke Rupiah dan Dollar " << endl;
		cout << "____________________________" << endl;
		cout << endl;
		cout << "Masukan Kode ="; cin >> kode;

		switch(kode)

		{
			case 1:
				cout << "Konversi Rupiah ke Dollar dan Yen" << endl;
				cout << "Masukan Jumlah Rupiah = Rp." ;cin >> rupiah;
				cout << "Rupiah ke Dollar =" << rupiah*0.00007;
				cout << " USD" << endl; 
				cout << "Rupiah ke Yen =" << rupiah*0.0076;
				cout << " Yen" << endl;
				break;
			case 2:
				cout << "Konversi Dollar ke Rupiah dan Yen" << endl;
				cout << "Masukan Jumlah USD =" ; cin >> dollar;
				cout << "Dollar ke Rupiah = Rp." << dollar*14081 << endl;
				cout << "Dollar ke Yen =" << dollar*107.48;
				cout << "Yen" << endl;
				break;
			case 3:
				cout << "konversi Yen ke Rupiah dan Dollar" << endl;
				cout << "Masukan Jumlah Yen =" ; cin >> yen;
				cout << "Yen ke Dollar =" << yen*0.0093;
				cout << " USD" << endl;
				cout << "Yen ke Rupiah = Rp." << yen*131 << endl;
				break;
			default:
			cout << "kode tersebut tidak ada dalam daftar" << endl;

	}
			cout << "Ingin Mengulangi Y/N=";
			cin >> loncat;
			if (loncat=='y' || loncat=='Y'){
				goto awal;
			}
			else {
				goto selesai;
			}
	selesai:
	system("pause")
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	
	return 0;
	
}

