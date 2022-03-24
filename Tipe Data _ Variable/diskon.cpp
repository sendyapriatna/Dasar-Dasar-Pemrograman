#include <iostream>
using namespace std;

int main()
{
	float harga,diskon;

	cout << "Harga Barang\t\t:Rp." ; cin >> harga;
	cout << "Diskon Barang\t\t:" ; cin >> diskon;
	system("cls");
	cout << "Harga Barang \t\t:Rp." << harga << endl;
	cout << "Diskon Barang\t\t:" << diskon << " %" << endl;
	cout << "______________________________________________________-" << endl;
	cout << "Total\t\t\t:Rp" << harga-(harga*diskon/100);
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
