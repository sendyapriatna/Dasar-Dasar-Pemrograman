#include <iostream>
using namespace std;

// PROGRAM MENGIHTUNG LUAS TRAPESIUM
        /*	_____________
           /            /
          /			   /
         /____________/  */

int main()

{
	float alasatas,alasbawah,tinggi;
	float hasil;

	cout << "Masukan Panjang Alas Atas = ";
	cin  >> alasatas;
	cout << "Masukan Panjang Akas Bawah = ";
	cin  >> alasbawah;
	cout << "Masukan Tinggi = ";
	cin  >> tinggi;
	hasil = (alasatas+alasbawah)*tinggi/2;
	cout << "Luas Trapesium = "<<hasil;

	cout << endl;
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	system("pause");
	system("cls");


}
