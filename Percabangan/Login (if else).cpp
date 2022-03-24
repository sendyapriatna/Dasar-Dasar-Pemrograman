#include <iostream>
using namespace std;

int main()

{
	string user;
	string pw;

	cout << "Akses Resep Rahasia.... Jawab Dulu Kuisnya" <<endl;
	cout << "_____________________________________________________" <<endl;
	cout << "1. User = Nama pelukis yang cuma bisa gambar pelangi" <<endl;
	cout << "2. Untuk Passwordnya sama gannn" << endl;
	cout << "_____________________________________________________" <<endl;
	cout << "Penulisan kecil semua" <<endl;
	cout << "_____________________________________________________" <<endl;
	cout << "Masukan User\t\t:" ; cin >> user ;
 	cout << "Masukan Password\t:" ; cin >> pw;
 	cout << "_____________________________________________________" <<endl;

 	system("pause");
 	system("cls");
 	if (user=="agung" && pw=="sama"){
 		cout << "Selamat Datang Bosss" <<endl;
 		cout << "____________________________________________" << endl;
 		cout << "Resep Rahasia Telor Rebus" << endl;
 		cout << "____________________________________________" << endl;
 		cout << "1. Didihkan air dalam panci" << endl;
 		cout << "2. Masukan telur lalu tunggu 15 mnt" <<endl;
 		cout << "____________________________________________" << endl;
 	}
 	else{
 		cout << "User / Password Salah Bossssssss";
 	}
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
 	return 0;
}
