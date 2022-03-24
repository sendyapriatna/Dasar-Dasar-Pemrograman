 //NAMA: SENDY APRIATNA
//NIM: 1900018205
//SLOT: SABTU JAM 10.30-13.30
#include <iostream>
using namespace std;
int main()
{
	struct data{
		// tempat tipe data dan inisialisasi variable
		char kode[50];
		char harga[50];
		char judul[50];
		char penulis[50];
		char penerbit[50];
	};
	// input banyak data menggunakan array
	data buku[50];
	int x;
	cout << "Masukan Jumlah :" ;
	cin >> x;
		//input data menggunakan struct
		system("cls");
		cout << " = Input Data Mahasiswa =" << endl;
		cout << endl;
		for(int i=0;i<x;i++){
				cin.ignore();
			cout << "Nim \t:";
			cin.getline(buku[i].kode,50);
			cout << "Nama \t:";
			cin.getline(buku[i].judul,50);
			cout << "Jurusan \t:";
			cin.getline(buku[i].penulis,50);
			cout << "Kampus \t:";
			cin.getline(buku[i].penerbit,50);
			cout << "Daerah Asal: ";
			cin.getline(buku[i].harga,50);
		
		}
		//output menggunakan struct
		system("cls");
		cout << "||       Nim       ||       Nama       ||       Jurusan       ||       Kampus       ||       Kota       ||"<<endl;
		cout << endl;
		cout << "||   ";
		for(int i=0;i<x;i++){
			cout << "" << buku[i].kode<<"   ||   ";
			cout << "" << buku[i].judul<<"   ||   ";
			cout << "" << buku[i].penulis<<"   ||   ";
			cout << "" << buku[i].penerbit<<"   ||   ";
			cout << "" << buku[i].harga<<"   ||   ";
			cout << endl;
			cout <<"||   ";
	}
}
