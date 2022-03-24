#include <iostream>
using namespace std;

int main()
{
	int a;
	char nama[30];
	char kelas;

	cout << "Masukan Nama\t:"; cin.getline(nama,30);
	cout << "Masukan Kelas\t:"; cin >> kelas ;
	cout << "1. T.Informatika" << endl;
	cout << "2. T.Industri" << endl;
	cout << "3. T.Pangan" << endl;
	cout << "4. T.Elektro" << endl;
	cout << "5. T.Kimia" << endl;
	cout << "Pilih Asal Prodi\t:" ;cin >> a ;

	cout << "Nama \t\t:" << nama << endl;
	cout << "Kelas\t\t:" << kelas << endl;
	cout << "Jurusan\t\t:" << a ;
		if(a==1){
			cout << "T.Informatika" ;
		}
		else if(a==2){
			cout << "T.Industri";
		}
		else if(a==3){
			cout << "T.Pangan";
		}
		else if(a==4){
			cout << "T.Elektro";
		}
		else if(a==5){
			cout << "T.Kimia";
		}
		else{
			cout << "Salah bosss";
		}
	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
		return 0;
}
