#include <iostream>
using namespace std;

int diskon()
{
	float harga,diskon;

	cout << "Harga Barang\t\t:Rp." ; cin >> harga;
	cout << "Diskon Barang\t\t:" ; cin >> diskon;
	system("cls");
	cout << "Harga Barang \t\t:Rp." << harga << endl;
	cout << "Diskon Barang\t\t:" << diskon << " %" << endl;
	cout << "______________________________________________________-" << endl;
	cout << "Total\t\t\t:Rp" << harga-(harga*diskon/100);
	cout << endl;
}
int main()
{
	diskon();
	cout << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
