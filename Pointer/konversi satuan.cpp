#include <iostream>
using namespace std;
int m(float *z){
	float hasil=*z/100;
	return hasil;
}
int km(float *z){
	float hasil2=*z/100000;
	return hasil2;
}
int main()

{
	float a;
	cout << "Konversi satuan CM ke M dan KM" << endl;
	cout << "Masukan Panjang X ="; cin >> a;

	system("cls");
	cout << "Meter =" << m(&a) << endl;
	cout << "Kilo Meter =" << km(&a) << endl;
	cout << endl;
	cout << endl;

	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
