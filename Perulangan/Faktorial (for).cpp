#include <iostream>
using namespace std;

int main()
{
	int n,faktorial=1;
	cout << "Masukan Bilangan Bulat :" ; cin >> n;
	for (int i=1; i<=n;i++){
		faktorial*=i;
	}
	cout << n <<"!\t=" << faktorial;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}

