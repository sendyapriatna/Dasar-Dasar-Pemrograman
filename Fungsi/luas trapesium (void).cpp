#include <iostream>
using namespace std;

// PROGRAM MENGIHTUNG LUAS TRAPESIUM
        /*	_____________
           /            /
          /			   /
         /____________/  */

void LuasTrapesium()

{
	float alasatas,alasbawah,tinggi;
	float hasil;

	cout << "Masukan Panjang Alas Atas = ";
	cin  >> alasatas;
	cout << "Masukan Panjang Alas Bawah = ";
	cin  >> alasbawah;
	cout << "Masukan Tinggi = ";
	cin  >> tinggi;
	hasil = (alasatas+alasbawah)*tinggi/2;
	cout << "Luas Trapesium = "<<hasil;
}
int main()
{
	LuasTrapesium();
	cout << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;

	return 0;

}
