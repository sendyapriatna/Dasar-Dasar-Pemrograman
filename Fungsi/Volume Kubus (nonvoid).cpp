#include <iostream>
using namespace std;
int volkubus(int x)
{
	float volume;
	volume=x;
	volume*=x;
	volume*=x;
	return volume;
}
int main()
{
	float a;
	cout << "Masukan Panjang Sisi ="; cin >> a;
	cout << "Volume Kubus\t=" << volkubus(a);
	cout << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
