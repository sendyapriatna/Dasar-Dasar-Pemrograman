#include <iostream>
using namespace std;
int main(){
	struct teman{
		string nama;
		int nim;
		int hp;
		string asal;
	};
	
	teman kelas[5];
	int n;
	cout << "Masukan Batasan :"; 
	cin >> n;
	for (int i=0;i<n;i++){
		cout << "Masukan Data Teman " << i+1 << endl;;
		cout <<"Nama     :";cin >> kelas[i].nama;
		cout <<"Nim      :";cin >> kelas[i].nim;
		cout <<"Nomor Hp :";cin >> kelas[i].hp;
		cout <<"Asal     :";cin >> kelas[i].asal;
	}
	for (int i=0;i<n;i++){
		cout << "Masukan Data Teman" << i+1 << endl;;
		cout <<"Nama     :"<< kelas[i].nama<< endl;
		cout <<"Nim      :"<< kelas[i].nim << endl;
		cout <<"Nomor Hp :"<< kelas[i].hp << endl;
		cout <<"Asal     :"<< kelas[i].asal << endl;
		cout << endl;
	}
}
