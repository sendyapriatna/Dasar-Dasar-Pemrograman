#include <iostream>
using namespace std;
int far(float *x){
	float faren=(*x*1.8) + 32;
	return faren;
}
int re(float *x){
	float reamur=*x*4/5;
	return reamur;
}
int kel(float *x){
	float kelvin=*x+273;
	return kelvin;
}
int main()
{
	float a;
	awal:
	system("cls");
	cout << "=====================================" << endl;
	cout << "||          Konversi Suhu          ||" << endl;
	cout << "=====================================" << endl;
	cout << " Celcius Ke Farenheit,Reamur,Kelvin" << endl;

			cout << "Masukan Suhu Celcius\t"; cin >> a ;
			cout << endl;
			cout << a << " C" << endl;
			cout << a << " C\t=" << far(&a) <<" F"<< endl;
			cout << a << " C\t=" << re(&a) <<" R" << endl;
			cout << a << " C\t=" << kel(&a) << " K" << endl;
	cout << endl;
	cout << "Terima Kasih Banyak" << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
