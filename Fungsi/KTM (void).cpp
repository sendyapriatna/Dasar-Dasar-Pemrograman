#include <iostream>;
using namespace std;

void ktm()
{
	char nama[60];
	int nim;
	char fakultas[60];
	char prodi[50];
	char alamat[50];

	cout << "Masukan Nama \t:" ; cin.getline(nama,60);
	cout << "Fakultas \t:" ; cin.getline(fakultas,60);
	cout << "Prodi \t\t:" ; cin.getline(prodi,50);
	cout << "Alamat \t\t:" ; cin.getline(alamat,50);
	cout << "Masukan Nim \t:" ; cin >> nim;

	system("cls");
	cout << "================================" << endl;
	cout << "||  UNIVERSITAS AHMAD DAHLAN  ||" << endl;
	cout << "================================" << endl;
	cout << "         KARTU MAHASISWA        " << endl;
	cout << "******** " << nama << endl;
	cout << "*      * " << nim << endl;
	cout << "* INI  * " << fakultas << endl;
	cout << "* FOTO * " << prodi << endl;
	cout << "******** " << alamat << endl;
}
int main()
{
	ktm();
	cout << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}
