#include <iostream>
using namespace std;
int main(){
	struct parkir{
		int jam;
		int pil;
	};
	parkir berkah;
	awal:
	system("cls");
	cout << "=========================" << endl;
	cout << "=     Parkir Berkah     =" << endl;
	cout << "=========================" << endl;
	cout << "= 1.Motor        Rp.2000=" << endl;
	cout << "= 2.Mobil        Rp.3000=" << endl;
	cout << "= 3.Bus          Rp.5000=" << endl;
	cout << "=========================" << endl;
	cout << " Masukan Pilihan : " ; cin >> berkah.pil;
	if(berkah.pil==1){
		cout << "== Parkir Motor ==" << endl;
		cout << "Setiap Lebih 1 Jam Tarif Bertambah Rp.1000" << endl;
		cout << "Masukan Jumlah Jam :" ; cin >> berkah.jam;
		cout << endl;
		if(berkah.jam==1){
			cout << "Tarif Parkir Anda = Rp.2000" << endl;
			cout << endl;  
			cout << "  == Terima Kasih ==" << endl;
		}
		else if(berkah.jam>1){
			cout << "Tarif Parkir Anda =" << (berkah.jam*1000)+2000 << endl;
			cout << endl;
			cout << "  == Terima Kasih ==" << endl;
		}
	}
	else if(berkah.pil==2){
		cout << "== Parkir Mobil ==" << endl;
		cout << "Setiap Lebih 1 Jam Tarif Bertambah Rp.1000" << endl;
		cout << "Masukan Jumlah Jam :" ; cin >> berkah.jam;
		cout << endl;
		if(berkah.jam==1){
			cout << "Tarif Parkir Anda = Rp.3000" << endl;
			cout << endl;  
			cout << "  == Terima Kasih ==" << endl;
		}
		else if(berkah.jam>1){
			cout << "Tarif Parkir Anda =" << (berkah.jam*1000)+3000 << endl;
			cout << endl;
			cout << "  == Terima Kasih ==" << endl;
		}
	}
	else if(berkah.pil==3){
		cout << "== Parkir Bus ==" << endl;
		cout << "Setiap Lebih 1 Jam Tarif Bertambah Rp.1000" << endl;
		cout << "Masukan Jumlah Jam :" ; cin >> berkah.jam;
		cout << endl;
		if(berkah.jam==1){
			cout << "Tarif Parkir Anda = Rp.5000" << endl;
			cout << endl;  
			cout << "  == Terima Kasih ==" << endl;
		}
		else if(berkah.jam>1){
			cout << "Tarif Parkir Anda =" << (berkah.jam*1000)+5000 << endl;
			cout << endl;
			cout << "  == Terima Kasih ==" << endl;
		}
	}
	else{
		cout << "Salah Input"<< endl;
		system("pause");
		goto awal;
		
	}
}
