#include <iostream>
using namespace std;

int main()
{
	float angkacuk;
	float angka;
	int x;
	cout << "SELAMAT DATANG DI PROGRAM KALKULUS" << endl;
	system("pause");
	system("cls");
	awal:
	cout << "Masukan X ="; cin >> angka;
	cout << "Masukan Y ="; cin >>angkacuk;
	system("cls");
	cout << "1. PENJUMLAHAN" << endl;
	cout << "2. PENGURANGAN" << endl;
	cout << "3. PEMBAGIAN" << endl;
	cout << "4. PERKALIAN" << endl;
	cout << "____________________________" << endl;
	cout << "PILIH MENU :"; cin >> x;
	switch(x)
	{
		case 1:
			cout << "PENJUMLAHAN =" << angka+angkacuk << endl;
			break;
		case 2:
			cout << "PENGURANGAN =" << angka-angkacuk << endl;
			break;
		case 3:
			cout << "PEMBAGIAN =" << angka/angkacuk << endl;
			break;
		case 4:
			cout << "PERKALIAN =" << angka*angkacuk << endl;
			break;
		default:
			cout << "INVALID" << endl;
	}
		system("pause");
		system("cls");
		goto awal;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}
