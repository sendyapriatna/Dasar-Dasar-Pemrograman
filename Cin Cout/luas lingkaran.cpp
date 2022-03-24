#include <iostream>
using namespace std;

// MENGITUNG LUAS LINGKARAN,3/4 LINGKARAN, 1/2 LINGKARAN, 1/4 LINGKARAN

int main()

{
	float jari;
	float jaripangkat;
	float hasil;

	
	cout << "Masukan Jari Jari = ";
	cin  >> jari;

	jaripangkat = jari*jari;
	hasil = 3.14*jaripangkat;
	cout << "Luas Lingkaran = " << hasil;
	cout << endl;

	hasil = ((3.14*jaripangkat)*3)/4;
	cout << "Luas 3/4 Lingkaran = " << hasil;
	cout << endl;

	hasil = (3.14*jaripangkat)/2;
	cout << "Luas 1/2 Lingkaran = " << hasil;
	cout << endl;

	hasil = (3.14*jaripangkat/4);
	cout << "Luas 1/4 Lingkaran = " << hasil;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;

	return 0;

}
