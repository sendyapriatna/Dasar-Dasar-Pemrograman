#include <iostream>
using namespace std;

int main()
{
	string nama;
	string alamat;
	string tempat;
	string tgl;
	string tinggi;
	string pekerjaan;
	string priwa;
	string nosim="01041335***";
	string berlaku="20-04-2024";
	
	cout<<"Masukan Nama Anda :";
	getline(cin,nama);
	cout<<"PRIA/WANITA :";
	getline(cin,priwa);
	cout<<"Masukan Alamat Anda :" ;
	getline(cin,alamat);
	cout<<"Masukan Tempat Lahir :" ;
	getline(cin,tempat);
	cout<<"Masukan Tanggal Lahir :" ;
	getline(cin,tgl);
	cout<<"Tinggi :" ;
	getline(cin,tinggi);
	cout<<"Masukan Pekerjaan :" ;
	getline(cin,pekerjaan);

	cout<<endl;
	system("cls");
	cout<<"-----------------------------------------------------"<< endl;
	cout<<"|      |           KEPOLISIAN NEGARA            |   |"<< endl;
	cout<<"|      |          REPUBLIK  INDONESIA           |   |"<< endl;
	cout<<"|      |         SURAT IZIN  MENGEMUDI          |   |"<< endl;
	cout<<"-----------------------------------------------------"<< endl;
	cout<<"  Nama :" << nama << "\t\t\t\t" << priwa <<endl;
	cout<<"	     Alamat :" << alamat <<endl;
	cout<< endl;
	cout<<"************* Tempat &\t:" << tempat<<endl;
	cout<<"*           * Tgl.Lahir\t:" << tgl <<endl;
	cout<<"*           * Tinggi\t:" << tinggi << " CM" <<endl;
	cout<<"*   I N I   * Pekerjaan\t:" << pekerjaan <<endl;
	cout<<"*  F O T O  * No.SIM\t:" << nosim <<endl;
	cout<<"*           * Berlaku\t:" << berlaku <<endl;
	cout<<"*           *   CIAMIS, 01-01-2020" <<endl;
	cout<<"*************   KASATLANTAS" <<endl;
	cout<<"-----------------------------------------------------"<< endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;

	system("pause");
	system("cls");
	cout << "***********Terima Kasih************" << endl;
	cout << "*****Program by Sendy_Apriatna*****" << endl;
	cout << "************1900018205*************" ;
	return 0;
}
