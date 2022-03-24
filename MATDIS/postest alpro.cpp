#include <iostream>
using namespace std;
 int main()
 {
	int berat,pilih;
	string nama;
	
	cout << "Masukan Nama Barang : " ; cin >> nama; 
	cout << "========================" << endl;
	cout << "1. Bahan"<<endl;
	cout << "2. Alat" <<endl;
	cout << "========================" << endl;
	cout << "Masukan Pilihan :" ; cin >> pilih;
	if(pilih==1){
		cout << "Masukan Berat Bahan (kg) :" ; cin >> berat;
		if(berat>0 && berat<10){
			cout << nama << " Termasuk Bahan Yang Ringan" << endl;
		}
		else if(berat>=10){
			cout << nama << " Termasuk Bahan Yang Berat " << endl;
		}
	}
	else if(pilih==2){
		cout << "Masukan Berat Bahan  :" ; cin >> berat;
		if(berat>0 && berat<5){
			cout << nama << " Termasuk Alat Yang Ringan" << endl;
		}
		else if(berat>=5){
			cout << nama << " Termasuk Alat Yang Berat " << endl;
		}
	}
	else{
		cout << "invalid" <<endl;
	}
 }
