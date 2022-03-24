#include <iostream>
using namespace std;
int main(){
	struct nilai{
		string nama;
		int nilai;
	};
	nilai mhs[5];
	int n;
	cout << "Passing Grade Nilai" << endl;
	cout << endl;
	cout << "Masukan Jumlah Mahasiswa :";
	cin >> n;
	for(int i=0;i<n;i++){
		cout << "Masukan Data Teman " << i+1 << endl;;
		cout << "Masukan Nama Mahasiswa :" ; cin >> mhs[i].nama;
		cout << "Masukan Nilai          :" ; cin >> mhs[i].nilai;
		cout << endl;
		
	}
	cout << "===================================================="<< endl;
	for(int i=0;i<n;i++){
		if(mhs[i].nilai>=75){
			cout << "Masukan Nama Mahasiswa :" << mhs[i].nama<< endl;
			cout << " == Lulus == ";
			cout << endl;
			cout << "---------------------------------------------------" << endl;
		}
		else{
			cout << "Masukan Nama Mahasiswa :" << mhs[i].nama<< endl;
			cout << " == Tidak Lulus ==" << endl;
			cout << endl;
			cout << "---------------------------------------------------" << endl;
		}
	}
}
