#include <iostream>
using namespace std;

int main()
{
	int usia;
	int a=18;
	int b=23;
	char nama[50];

	cout << "Apakah Kamu Jodohku????" << endl;
	cout << "Siapa Namamu??" ; cin >> nama;
	cout << "Berapa Usiamu??" ; cin >> usia;
		if(usia>=a && usia<=b){
			cout << "Ternyata Kamu Adalah Jodoh Yang Aku Cari" << endl;
			cout << nama;
		}
		else{
			cout << "Ternyata Kamu Memang Jodohku" << endl;
			cout << nama;
		}
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;

}