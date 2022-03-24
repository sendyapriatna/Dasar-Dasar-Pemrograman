#include <iostream>
using namespace std;

// PROGRAM MENGHITUNG VOLUME LIMAS SEGITIGA

int main()

{
	float alas,tinggis,tinggi;
	float hasil;

	cout << "Masukan Alas Segitiga =" ;
	cin  >> alas;
	cout << "Masukan Tinggi Segitiga = ";
	cin  >> tinggis;
	cout << "Masukan Tinggi Prisma = ";
	cin  >> tinggi;
	hasil = (alas*tinggis*tinggi)/3;
	cout << "Volume Limas Segitiga = " << hasil;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}
