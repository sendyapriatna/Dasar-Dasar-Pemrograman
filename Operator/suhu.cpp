#include <iostream>
using namespace std;

int main()
{
	float a;
	int angka;
	char balik;

	awal:
	system("cls");
	cout << "=====================================" << endl;
	cout << "||          Konversi Suhu          ||" << endl;
	cout << "=====================================" << endl;
	cout << "1. Celcius Ke Farenheit,Reamur,Kelvin" << endl;
	cout << "2. Farenheit Ke Celcius,Reamur,Kelvin" << endl;
	cout << "3. Reamur Ke Celcius,Farenheit,Kelvin" << endl;
	cout << "4. Kelvin Ke Celcius,Farenheit,Reamur" << endl;
	cout << "=====================================" << endl;
	cout << "Masukan Angka\t:" ;
	cin  >> angka;

	switch(angka)
		{
		case 1:
			cout << "Masukan Suhu Celcius\t"; cin >> a ;
			cout << endl;
			cout << a << " C" << endl;
			cout << a << " C\t=" << (a*1.8) + 32 <<" F"<< endl;
			cout << a << " C\t=" << a*4/5 <<" R" << endl;
			cout << a << " C\t=" << a+273 << " K" << endl;
			break;
		case 2:
			cout << "Masukan Suhu Farenheit\t:"; cin >> a;
			cout << endl;
			cout << a << " F" << endl;
			cout << a << " F\t=" << (a-32)*5/9 << " C" << endl;
			cout << a << " F\t=" << (a-32)*4/9 << " R" << endl;
			cout << a << " F\t=" << (a-32)*5/9+273 << " K" << endl;
			break;
		case 3:
			cout << "Masukan Suhu Reamur\t:"; cin >> a;
			cout << endl;
			cout << a << " R" << endl;
			cout << a << " R\t=" << a*5/4 << " C" << endl;
			cout << a << " R\t=" << (9/4*a)+32 << " F" << endl;
			cout << a << " R\t=" << (5/4*a)+273 << " K" << endl;
			break;
		case 4:
			cout << "Masukan Suhu Kelvin\t:"; cin >> a;
			cout << endl;
			cout << a << " K" << endl;
			cout << a << " K\t=" << a-273 << " C" << endl;
			cout << a << " K\t=" << ((a-273)*1.8)+32 << " F" << endl;
			cout << a << " K\t=" << (a-273)*4/5<< " R" << endl;
			break;
		}
			cout << "Ulangi [Y/N]" ; cin >> balik ;
			if (balik=='Y'){
				goto awal;
			}
			if (balik=='N'){
				goto akhir;
			}
	akhir:
	cout << endl;
	cout << "Terima Kasih Banyak" << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
