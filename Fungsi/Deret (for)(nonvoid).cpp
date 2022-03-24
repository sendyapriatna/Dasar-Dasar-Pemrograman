#include <iostream>
using namespace std;
int deret(int x, int y)
{
		if(x>100 && y<100){
			for(int i=x;i>=y;i--){
				cout << i << endl;
			}
		}
		else{
			for(int i=x;i<=y;i++)
				cout << i << endl;
		}
}

int main()
{
	int a,b;
	cout << "\t== Program Deret Angka==";
	cout << endl;
	cout << "Masukan Angka X :" ; cin >> a;
	cout << "Masukan Angka Y :" ; cin >> b;
	cout << endl;
	cout << "Banyak Deret Angka Yang Di Tamplikan :";
	deret(a,b);
	cout << endl;
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}
