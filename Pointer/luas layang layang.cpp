#include <iostream>
using namespace std;
int layang(float *x, float *y){
	float hasil=(*x**y)/2;
	return hasil;
}
int main()
{
	float a,b;
	cout << "Masukan Diagobal A :" ; cin >> a;
	cout << "Masukan Diagonal B :" ; cin >> b;
	cout << endl;
	cout << endl;
	cout << "Luas Layang Layang Adalah :" << layang(&a,&b) << endl;
	
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
