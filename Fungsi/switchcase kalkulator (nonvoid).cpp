#include <iostream>
using namespace std;

int tambah(int x, int y)
{
	float tambah;
	tambah=x+y;
	return tambah;
}
int kurang(int x, int y)
{
	float kurang;
	kurang=x-y;
	return kurang;
}
int kali(int x, int y)
{
	float kali;
	kali=x*y;
	return kali;	
}
int bagi(int x, int y)
{
	float bagi;
	bagi=x/y;
	return bagi;
}
int main()
{
	float a;
	float b;
	int pilih;
	cout << "SELAMAT DATANG DI PROGRAM KALKULUS" << endl;
	awal:
	cout << "Masukan Angka Pertama ="; cin >> a;
	cout << "Masukan Angka Kedua ="; cin >> b;
	cout << "1. PENJUMLAHAN" << endl;
	cout << "2. PENGURANGAN" << endl;
	cout << "3. PEMBAGIAN" << endl;
	cout << "4. PERKALIAN" << endl;
	cout << "____________________________" << endl;
	cout << "PILIH MENU :"; cin >> pilih;
	switch(pilih)
	{
		case 1:
			cout << "PENJUMLAHAN =" <<tambah(a,b) << endl;
			break;
		case 2:
			cout << "PENGURANGAN =" << kurang(a,b) << endl;
			break;
		case 3:
			cout << "PEMBAGIAN =" << bagi(a,b) << endl;
			break;
		case 4:
			cout << "PERKALIAN =" << kali(a,b) << endl;
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
