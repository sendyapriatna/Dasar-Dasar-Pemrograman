#include <iostream>
using namespace std;

// PROGRAM MENGHITUNG VOLUME LIMAS SEGITIGA
int limas(float *a,float *b,float *c){
	float hasil=*a**b**c/3;
	return hasil;
}
int main()

{
	float x,y,z;
	cout << "Masukan Alas Segitiga =" ;
	cin  >> x;
	cout << "Masukan Tinggi Segitiga = ";
	cin  >> y;
	cout << "Masukan Tinggi Prisma = ";
	cin  >> z;
	cout << "Volume Limas Segitiga = " << limas(&x,&y,&z);
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
}
