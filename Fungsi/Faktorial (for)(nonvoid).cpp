#include <iostream>
using namespace std;
void faktor()
{
	int n,faktorial=1;
	cout << "Masukan Bilangan Bulat :" ; cin >> n;
	for (int i=1; i<=n;i++){
		faktorial*=i;
	}
	cout << n <<"!\t=" << faktorial;
}
int main()
{
	faktor();
	cout << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}

